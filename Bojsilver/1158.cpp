//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0), cin.tie(0);
//	int n, k;
//	cin >> n >> k;
//	list<int> list;
//	for (int i = 1; i <= n; i++)
//		list.push_back(i);
//	auto it = list.begin(); // it�� ���� ������ ��ġ 
//	cout << "<";
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++) //�ݺ��� kĭ  �̵� �� �ش� ��ġ ���� 
//		{
//			it++;
//			if (it == list.end())//�ݺ��� ��ȯ 
//				it = list.begin();
//		}
//		if (i != n - 1)
//		{
//			cout << *it << ", ";
//			list.erase(it);
//		}
//		else {
//			cout << *it;
//			list.erase(it);
//		}
//	}
//	cout << ">";
//}