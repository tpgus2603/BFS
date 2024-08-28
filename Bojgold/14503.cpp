#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>
using namespace std;
#define X first 
#define Y second 

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool clean[50][50];
int arr[50][50];
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n,m;
  cin>>n>>m;
  int r,c,d;
  cin>>r>>c>>d;
  queue<pair<int,int>> q;
  q.push({r,c});
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>arr[i][j];
    }
  }
  int cnt=1;
  clean[r][c]=true;//û�ҿϷ� 
  while(!q.empty())
  {
    auto cur=q.front();
    //cout<<cur.X <<' '<<cur.Y<<'\n';
    q.pop();
    //����ĭ �ֺ� 4ĭ�� û�ҵ��� ����  ��ĭ�� ���°��
    bool noblank=true;
    for(int i=0;i<4;i++)
    {
      int nx=cur.X+dx[i];
      int ny=cur.Y+dy[i];
      if(arr[nx][ny]==0&&!clean[nx][ny]) //��ĭ����
        noblank=false;
    }
    if(noblank) //2��
    {
      int nx=cur.X-dx[d];
      int ny=cur.Y-dy[d];
      if(arr[nx][ny]==1)break;
      if(nx<0||nx>=n||ny<0||ny>=m)break;
      if(clean[nx][ny]==false)
      {
        cnt++;
        clean[nx][ny]=true;
      }
      q.push({nx,ny}) ;//���� �����ϰ� ���� 
    }
    else //3�� 
    {
      int t=4;
      while(t--)
      {
        d--;
        if(d==-1) d=3;
        int nx=cur.X+dx[d];
        int ny=cur.Y+dy[d];
        if(arr[nx][ny]==1||clean[nx][ny])continue;
        if(nx<0||nx>=n||ny<0||ny>=m)continue;
        cnt++;
        clean[nx][ny]=true;
        q.push({nx,ny});
        break;
      }

    }
  }
  cout<<cnt;



}