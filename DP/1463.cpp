#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
int arr[1000001] = { 0 }; //���� �ִ� 100���̹Ƿ� dp�� �̿��Ͽ� �ϳ��� �׾Ƶ� �޸𸮿� �����̾��� 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	arr[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 1; //�⺻�� ���� �׿� +1
		if (i % 2 == 0)arr[i] = min(arr[i], arr[i / 2] + 1); //2�ǹ���ΰ�� ������ arr[i]�� arr[i/2]+1�� �ּҰ� �� 
		if (i % 3 == 0)arr[i] = min(arr[i], arr[i / 3] + 1);
	}

	cout << arr[n];

}