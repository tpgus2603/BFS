//#include<stdio.h>
//#include<string>
//#include<iostream>
//using namespace std;
//int main()
//{
//	string word;
//	cin >> word;
//	int cnt = 0;
//	int size = word.size();
//	for (int i = 0; i < size; i++)
//	{
//		if (word[i] == 'c'|| word[i] == 's'|| word[i] == 'z') //c s z�ΰ�� 
//		{
//			if (word[i + 1] == '=') //c= z= s=�ΰ�� 
//			{
//				cnt++; i++;
//			}
//			else if (word[i] == 'c' && word[i + 1] == '-')  //c-�ΰ��
//			{
//				cnt++; i++;
//			}
//			else cnt++;
//		}
//		else if (word[i] == 'd' ) //d-�ΰ�� 
//		{
//			if (word[i + 1] == '-')//d-�ΰ�� 
//			{
//				cnt++; i++;
//			}
//			else if (word[i + 1] == 'z' && word[i + 2] == '=') //dz=�ΰ�� 2ĭ�̵� 
//			{
//				cnt++;
//				i += 2;
//			}
//			else cnt++;
//		}
//		else if (word[i] == 'l' || word[i] == 'n') //l n�ΰ�� 
//		{
//			if (word[i + 1] == 'j') //lj nj�ΰ��
//			{
//				cnt++;
//				i++;
//			}
//			else cnt++;
//		}
//		else   cnt++;//������ ���ĺ�
//	
//	}
//	cout << cnt;
//
//
//
//}