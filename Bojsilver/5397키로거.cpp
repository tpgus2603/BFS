//#include<iostream>
//#include<list>
//#include<string>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int testn;
//	string word;
//	cin >> testn;
//	for (int i = 0; i < testn; i++)
//	{
//		list<char>list; //���� ����Ʈ 
//		cin >> word;
//		int size = word.size(); 
//		auto cursor = list.begin();//�ڵ�� Ŀ�� ��ġ�� Ŀ���� ������ ������ �ݺ��� 
//		for (int j = 0; j < size; j++) //���ĺ��� ��� ����Ʈ�� �߰� 
//		{
//			
//			if (word[j] == '<')
//			{			
//				if (list.size() != 0) {
//					if (cursor != list.begin())
//						cursor--;
//				}
//			}
//			else if (word[j] == '>')
//			{			
//				if (list.size() != 0)
//				{
//					if (cursor !=list.end())
//						cursor++;
//				}
//			}
//			else if (word[j] =='-')
//			{
//				if (cursor != list.begin())
//				{
//					cursor = list.erase(--cursor);
//	
//				}
//			}
//			else //���ڳ� ���� �Է�
//			{
//				list.insert(cursor, word[j]);
//			} //
//		}
//		for (auto a : list)
//			cout << a;
//		cout << "\n";
//	}
//
//}