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
//	auto it = list.begin(); // it�� ����
//	cout << "<";
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k-1; j++) //�ݺ��� kĭ  �̵� �� �ش� ��ġ ���� 
//		{
//			if (it == --list.end())//��
//				it = list.begin();
//			else
//				it++;
//		}
//		if (i != n - 1)
//		{
//			cout << *it << ", ";
//			it=list.erase(it);
//			if (it == list.end())
//				it = list.begin();
//		}
//		else {
//			cout << *it;
//			list.erase(it);
//		}
//	}
//	cout << ">";
//}