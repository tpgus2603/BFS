#include<iostream>
#include<algorithm>

using namespace std;

int dp[31];
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin>>n;
  dp[0]=1;
  dp[2]=3;
  dp[3]=0;
  for(int i=4;i<=n;i+=2)
  {
    dp[i]+=3*dp[i-2];
    for(int j=4;j<=i;j+=2)
      dp[i]+=2*dp[j-4];
  }
  cout<<dp[n];
}