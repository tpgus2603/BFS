//#include<iostream>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int arr[1000001] = { 0 }; //���� �ִ� 100���̹Ƿ� dp�� �̿��Ͽ� �ϳ��� �׾Ƶ� �޸𸮿� �����̾��� 
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n;
//	cin >> n;
//	arr[1] = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		arr[i] = arr[i - 1] + 1; //�⺻�� ���� �׿� +1
//		if (i % 2 == 0)arr[i] = min(arr[i], arr[i / 2] + 1); //2�ǹ���ΰ�� ������ arr[i]�� arr[i/2]+1�� �ּҰ� �� 
//		if (i % 3 == 0)arr[i] = min(arr[i], arr[i / 3] + 1);
//	}
//
//	cout << arr[n];
//
//}
////for (int i = 2; i <= 1000000; i++) //dp�� �̿��Ͽ� 
////{
////	if (i % 3 == 0)
////	{
////		if (i % 2 == 0)  //6�ǹ���� ��� 
////		{
////			vector<int>minarr = { arr[i / 3],arr[i / 2],arr[i - 1] };
////			auto k = min_element(minarr.begin(), minarr.end());
////			arr[i] = *k + 1;
////		}
////		else if (arr[i / 3] > arr[i - 1]) //�Ϲ� 3�ǹ�� �ΰ�� 
////			arr[i] = arr[i - 1] + 1;
////		else
////			arr[i] = arr[i / 3] + 1;
////	}
////	else if (i % 2 == 0)
////	{
////		if (arr[i / 2] > arr[i - 1]) //2�� ���� ���� ������ �� ū���
////			arr[i] = arr[i - 1] + 1;
////		else
////			arr[i] = arr[i / 2] + 1;
////	}
////	else
////		arr[i] = arr[i - 1] + 1;
////}