#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int arr[1001][1001];
int dp[1001][1001];
int maxn;
int main()
{
  int n,m;
  cin>>n>>m;
  string str[n+1];
  for(int i=0;i<n;i++)
    cin>>str[i];
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
      arr[i][j]=str[i-1][j-1]-'0';
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      if(arr[i][j]==1)
      {
        if(dp[i-1][j]>=1&&dp[i-1][j-1]>=1&&dp[i][j-1]>=1)
        {
          dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
          if(dp[i][j]>=maxn)
            maxn=dp[i][j];
        }
        else{
          dp[i][j]=1;
          if(dp[i][j]>=maxn)
            maxn=dp[i][j];
        }

      }
    }
  }
  cout<<maxn*maxn;

  


}