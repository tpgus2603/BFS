#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  vector<int> dp(n,1);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(arr[j]>arr[i]) dp[i]=max(dp[i],dp[j]+1);
    }
  }  
  auto t=max_element(dp.begin(),dp.end());
  cout<<*t;

}