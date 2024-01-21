#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, m;
int arr[8];
bool isused[8];
vector<int>saved;
void sequence(int cur) //�־��� �����߿��� m���� ���ϴ� ���� 
{
	if (cur == m)
	{
		for (auto k : saved)
			cout << k << ' ';
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!isused[i])
		{
			if ((cur > 0 && saved[cur-1] <= arr[i]) || cur == 0) //�ֱٿ� ����� ��Һ��� ���ų� ū���
			{
				isused[i] = 1;
				saved.push_back(arr[i]);
				sequence(cur + 1);
				if (i < n - 1 && saved[cur] == arr[i + 1]) //�ֱٿ� ����� ��ҿ� ������ ����� ��Ұ� ���ٸ� 
				{
					int temp = saved[cur];
					saved.pop_back();
					isused[i] = 0;
					while (i < n - 1 && temp == arr[i + 1]) //�� ��Ҵ� ������ ������������ 
						i++;
				}
				else {
					saved.pop_back();
					isused[i] = 0;
				}
			}
		}
	}

}
int main()
{
	cin >> n >> m;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr[i] = temp;
	}

	sort(arr, arr + n);
	sequence(0);


}