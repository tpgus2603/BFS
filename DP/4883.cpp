#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  int testn=1;
  while(1)
  {
    cin>>n;
    if(n==0)
      break;
    int arr[n][3];
    int dp[n][3];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<3;j++)
      {
        cin>>arr[i][j];
        dp[i][j]=0;
      }
    }
    dp[0][0]=10000;
    dp[0][1]=arr[0][1];
    dp[0][2]=arr[0][1]+arr[0][2];
    for(int i=1;i<n;i++)
    {
      dp[i][0]=min({dp[i-1][0],dp[i-1][1]})+arr[i][0];
      dp[i][1]=min({dp[i][0],dp[i-1][0],dp[i-1][1],dp[i-1][2]})+arr[i][1];
      dp[i][2]=min({dp[i][1],dp[i-1][1],dp[i-1][2]})+arr[i][2];
    }
    cout<<testn<<". "<<dp[n-1][1]<<'\n';
    testn++;
    
  }


}