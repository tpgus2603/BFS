 #include<iostream>
 #include<utility>
 #include<algorithm>
 #include<queue>
 #include<tuple>
 #include<vector>

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
#define X first
#define Y second
using namespace std;

int arr[21][21];
int ti[21][21];
int dis[21][21];
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin>>n;
  pair<int,int> st;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cin>>arr[i][j];
      if(arr[i][j]==9)
      {
          st={i,j};
          arr[i][j]=0; //��� �ִ°��� ��������� �صα�
      }
    }
  }
  int ma=0;

  int weight=2; //������ ����
  int cnt=0;  //���� �� ���� ���� 
  ti[st.X][st.Y]=0;
  while(1)
  {
    queue<pair<int,int>> tq;//targetã��� ��ǥ
    queue<pair<int,int>> sq; // target������ //��ǥ 
    vector<tuple<int,int,int>> target; //Ÿ���� �Ÿ�,��ǥ 
    tq.push({st.X,st.Y});
    sq.push({st.X,st.Y});
    bool vis[21][21];
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
          vis[i][j]=0;
          dis[i][j]=-1;
      }
    }
    dis[st.X][st.Y]=0;
    while(!tq.empty())
    {
      auto cur=tq.front();
      tq.pop();
      for(int i=0;i<4;i++)
      {
        int nx=cur.X+dx[i];
        int ny=cur.Y+dy[i];
        if(nx<=0||nx>n||ny<=0||ny>n)continue;
        if(dis[nx][ny]>=0||arr[nx][ny]>weight)continue;
        dis[nx][ny]=dis[cur.X][cur.Y]+1;
        if(arr[nx][ny]<weight&&arr[nx][ny]!=0) //Ÿ�� ã����� 
        {  
          target.push_back({dis[nx][ny],nx,ny});
        }
        else
          tq.push({nx,ny});
      }
    }
    if(target.size()==0)
      break;
    sort(target.begin(),target.end());
    int a,b,c;
    tie(a,b,c)=target[0];
    pair<int,int> ta={b,c};
    vis[st.X][st.Y]=true;
    while(!sq.empty()) //��� ������ 
    {
      auto cur=sq.front();
      sq.pop();
      if(cur.X==ta.X&&cur.Y==ta.Y) //Ÿ�� ������� 
      {
        ma=ti[cur.X][cur.Y];
        st={cur.X,cur.Y};
        arr[cur.X][cur.Y]=0;
        cnt++;
        if(cnt==weight)
        {
          weight++;
          cnt=0;
        }
        break;
      }
      for(int i=0;i<4;i++)
      {
        int nx=cur.X+dx[i];
        int ny=cur.Y+dy[i];
        if(nx<=0||nx>n||ny<=0||ny>n)continue;
        if(vis[nx][ny]||arr[nx][ny]>weight)continue;
        ti[nx][ny]=ti[cur.X][cur.Y]+1;
        vis[nx][ny]=true;
        sq.push({nx,ny});
      }
    }
  }
  
  cout<<ma;

}