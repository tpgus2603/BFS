//#include<stack>
//#include<iostream>
//using namespace std;
//int main()
//{
//	stack<int>stk;
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n,h;
//	cin >> n;
//	long long sum = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> h;   //monostone ���ο� ���Ұ� ������ �ֻ�� ���� ũ��  pop�ϱ� 
//		while (!stk.empty() && stk.top() <= h) //������ ��ų� ���� �ֻ�ܺ��� ū��� ���� ������ push
//			stk.pop();
//		sum += stk.size();
//		stk.push(h);
//
//	}
//	cout << sum;
//
//}
//
//
//
//
////
////
////int arr[80001] = { 0 };
////ios::sync_with_stdio(0); cin.tie(0);
////int n, h;
////cin >> n;
////int sum = 0;
////for (int i = 1; i <= n; i++)
////{
////	cin >> h;
////	arr[i] = h;//���� ���� 
////}
////for (int i = 1; i <= n; i++)
////{
////	for (int j = i + 1; j <= n; j++)
////	{
////		if (arr[i] > arr[j])
////			sum++;
////		else
////			break;
////	}
////}
////cout << sum;