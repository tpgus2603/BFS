//#include<map>
//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int testn;
//	cin >> testn;
//	for (int i = 0; i < testn; i++)
//	{
//		int n;
//		cin >> n;
//		map<string,int>arr; //���������� Ű�� ������ ����� 
//		for (int i = 0; i < n; i++)
//		{
//			string item, cloth;//���̸� �� ���� 
//			cin >> item >> cloth;
//			arr[cloth]++;
//		}
//		int num = 1;
//		for (auto k=arr.begin();k!=arr.end();k++)
//		{
//			num *= (k->second + 1);
//		}
//		cout << num - 1<<'\n';
//
//	}
//
//
//}