//#include<iostream>
//
//using namespace std;
//
//int arr[20];
//int n, m;
//int cnt = 0;
//void select(int i, int sum) //a=���� �������� �迭 �ε��� 
//{
//	if (i == n)
//	{
//		if (sum == m)
//			cnt++;
//		return;
//	}
//	select(i + 1, sum + arr[i]);
//	select(i + 1, sum);
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		arr[i] = temp;
//	}
//	select(0, 0);
//	if (m == 0) cnt--;
//	cout << cnt;
//
//
//}