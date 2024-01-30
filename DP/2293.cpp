#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dp[10001];
int main()
{
ios::sync_with_stdio(0);cin.tie(0);
  int n,k;
  cin>>n>>k;
  dp[0]=1;
  vector<int> coin(n);
  for(int i=0;i<n;i++)
    cin>>coin[i];
  sort(coin.begin(),coin.end()); 

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=k;j++)
    {
      if(j>=coin[i])
        dp[j]+=dp[j-coin[i]]; //���������� ���� ���� �������� ��� ������ �޸��ϸ� ���̺��� �����Ѵ�
      else
        continue;
    }
  }
  cout<<dp[k];

}





















// int dp[101][10001];

// int main()
// {
//   ios::sync_with_stdio(0);cin.tie(0);
//   int n,k;
//   cin>>n>>k;
//   for(int i=0;i<=n;i++)
//   {
//     dp[i][0]=1;
//   }
//   vector<int> arr(n);
//   for(int i=0;i<n;i++)
//     cin>>arr[i];
//   sort(arr.begin(),arr.end()); 
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=k;j++)
//     {
//       if(j>=arr[i-1])
//         dp[i][j]=dp[i][j-arr[i-1]]+dp[i-1][j];
//       else
//         dp[i][j]=dp[i-1][j];
//     }
//   }
//   cout<<dp[n][k];
// }