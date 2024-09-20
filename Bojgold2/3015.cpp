#include<iostream>
#include<stack>
#include<vector>
#include<utility>
using namespace std;
#define X first 
#define Y second
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);

  int n;
  cin>>n;
  vector<int> arr;
  int temp;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    arr.push_back(temp);
  }
  stack<pair<int,int>>s;
  long long ans=0;
  for(int i=0;i<n;i++)
  {
    int cnt=1;
    while(!s.empty()&&s.top().X<=arr[i]) //���� ���� ����潺��
    {
      auto cur=s.top();
      ans+=cur.Y;
      if(cur.X==arr[i])cnt+=cur.Y; //�����͵�� ������ ���� ��
      s.pop();
    }
    if(!s.empty())ans++;
    s.push({arr[i],cnt});
  }
  cout<<ans;

}