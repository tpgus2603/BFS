//#include<iostream>
//#include<string>
//#include<list>
//#include<cstdio>
//using namespace std;
//int main() {
//
//	//ios::sync_with_stdio(0), cin.tie(0);
//	string word;
//	cin >> word;
//	list<char> arr;
//	int size = word.size();
//	for (int i = 0; i < size; i++)
//		arr.push_back(word[i]);
//	auto cusor = arr.end(); //���������� ���� �������� �ڵ������ Ŀ����ġ�� Ŀ���� ������   ���� 
//	
//
//	int n;
//	cin >> n;
//	while (getchar() != '\n');
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//
//		getline(cin, str);
//		if (str[0] == 'L')
//		{
//			if (cusor != arr.begin())
//				cusor--;
//		}
//		else if (str[0] == 'D')
//		{
//			if (cusor != arr.end())
//				cusor++;
//		}
//		else if (str[0] == 'B')
//		{
//			if (cusor != arr.begin()) {
//				cusor--;//������ ���� �ڸ��� ��ġ
//				cusor = arr.erase(cusor);//����Ʈ���� ���� ���� �� ���� ���ڸ� ����Ŵ
//			}
//	
//		}
//		else if (str[0] == 'P')
//		{
//			if (cusor == arr.begin())
//			{
//				arr.push_front(str[2]);
//			}
//			else
//				arr.insert(cusor,str[2]);
//
//		}
//
//	}
//	int arrsize = arr.size();
//	auto k = arr.begin();
//	for (int i = 0; i <arrsize; i++)
//	{
//		cout << *k;
//		k++;
//	}
//}