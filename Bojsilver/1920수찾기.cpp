//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//#include <iterator>
//using namespace std;
//template<typename it,typename T> 
//bool binarysearch(it begin, it end, T a)
//{
//	auto center = begin;
//	advance(center, distance(begin, end) / 2);
//	if (*center == a)
//		return true;
//	if (begin + 1 >= end)  //ũ�Ⱑ 1���ϰ� �ɶ� 
//		return false;
//	if (*center > a)
//		return binarysearch(begin, center, a); 
//	else if (*center < a)
//		return binarysearch(center, end, a);
//
//}
//
//
//
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n, m;
//	cin >> n;
//	vector<int>narr(n);
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		narr[i] = temp;
//	}
//	sort(narr.begin(), narr.end());
//	cin >> m;
//	vector<int>marr(m);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp;
//		marr[i] = temp;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		//if (binary_search(narr.begin(), narr.end(), marr[i]))
//			//cout << 1 << '\n';
//		if (binarysearch(narr.begin(), narr.end(), marr[i]))
//			cout << 1 << '\n';
//		else
//			cout << 0 << '\n';
//	}
//
//
//}
//
//
//
//
//
////bool binarysearch(const vector<T> &a,const T b)
////{	
////	auto center = a.begin();
////	advance(center, floor(distance(a.begin(), a.end()) / 2));  //center��ġ ���� 
////	 if (*center == b)
////		return true;
////	 if (a.size() == 1)
////		 return false;//���� �迭�� �������� ���� ������������
////	 if (*center > b)
////		return binarysearch(vector<T>(a.begin(), center), b); //�� �������� �ð��Ҹ� ŭ 
////	 else if (*center < b)
////		return binarysearch(vector<T>(center, a.end()), b);
////}