#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][31][3]; //dp[i][j][k] iȸ���� �� j�� ���������� ��ġ�� k�� ��� �ִ밳��  
int loc[1001];
int main()
{
  int t,w;
  cin>>t>>w;
  int temp;
  for(int i=1;i<=t;i++)
  {
    cin>>temp;
    loc[i]=temp;
  }
  for(int i=1;i<=t;i++)
  {
    if(loc[i]==1)
    {
      dp[i][0][1]=dp[i-1][0][1]+1;
    }
    else
      dp[i][0][1]=dp[i-1][0][1];
    for(int j=1;j<=w;j++)
    {
      if(i<j)break; //����ȸ������ ���� �����̴� ��� ���� 
      if(loc[i]==1)
      {
        dp[i][j][1]=max(dp[i-1][j-1][2]+1,dp[i-1][j][1]+1);
        dp[i][j][2]=max(dp[i-1][j-1][1],dp[i-1][j][2]);
      }
      else
      {
        dp[i][j][1]=max(dp[i-1][j-1][2],dp[i-1][j][1]);
        dp[i][j][2]=max(dp[i-1][j-1][1]+1,dp[i-1][j][2]+1);
      }
    }
  }
  int maxn=0;
  for(int i=0;i<=w;i++)
  {
    int temp=max(dp[t][i][1],dp[t][i][2]);
    if(maxn<temp)
      maxn=temp;
  }
  cout<<maxn;

}