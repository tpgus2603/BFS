#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int dp[1001]; // dp[i] �κм����� ������ ���� arr[i]�� ������ �ִ� ���� 
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
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		vector<int>dptemp; //���� Ŀ���� �ε������� ���� �ε����� �κм����� ����� ���� ã������
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j]) //�������� arr[i]���� ���� dp�� ã��
				dptemp.push_back(dp[j]);
		}
		if (dptemp.size() != 0) //�������� arr[i]���� ������ ������
		{
			auto k = max_element(dptemp.begin(), dptemp.end());
			dp[i] = *k + 1;
		}
		else //������-> 1
			dp[i] = 1;
	}
	auto k = max_element(dp+1, dp + n+1);
	cout << *k;

}