#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
vector<int> dp[1001]; // dp[i] �κм����� ������ ���� arr[i]�� �κм��� �� ���̰� �ִ��� �κм��� ����Ʈ
int arr[1001];

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}
	//dp[1].push_back(arr[1]);
	for (int i = 1; i <= n; i++)
	{
		vector<pair<int,int>> dpsize; //���� Ŀ���� �ε������� ���� �ε����� �κм����� ����� ���� ã������
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j]) //�������� arr[i]���� ���� 
				dpsize.push_back({dp[j].size(),j});
		}
		if (dpsize.size() != 0) //�������� arr[i]���� ������ ������
		{
			auto k = max_element(dpsize.begin(), dpsize.end());
      auto p=*k;
			dp[i] = dp[p.second];
      dp[i].push_back(arr[i]);
		}
		else //������
			dp[i].push_back(arr[i]);
	}
  int maxsize=0;
  int maxidx=1;
	for(int i=1;i<=n;i++)
  {
    int temp=dp[i].size();
    if(maxsize<temp)
    {
      maxsize=temp;
      maxidx=i;
    }
  }
  cout<<maxsize<<'\n';
  for(auto k:dp[maxidx])
    cout<<k<<' ';  
}