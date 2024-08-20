#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// int dp[100000][2];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<vector<int>> dp(n, vector<int>(2, 0));
  // dp[n][0] ������� ���� ū ���� �� ��dp[n][1] -> ���� �������� ���Ӽ� ��
  dp[0][0] = arr[0];
  dp[0][1] = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] * (-1) > dp[i - 1][1])
      dp[i][1] = arr[i];
    else
    {
      if(dp[i-1][1]<0) //���� ���Ӽ��� �����̸� �����ϰ� ���Ӽ� �� ���ϱ� 
        dp[i][1]=arr[i];
      else
        dp[i][1] = dp[i - 1][1] + arr[i];
    }
    dp[i][0] = max(dp[i - 1][0], dp[i][1]);
  }
  cout << dp[n - 1][0];
}