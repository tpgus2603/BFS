//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//  ios::sync_with_stdio(0), cin.tie(0)
//	int n;
//	cin >> n;
//	int sum = 0;
//	int a, b;//�и� ���� 
//	for (int i = 1; sum <= 10000 * 2000; i++)
//	{
//		if (n > sum && n <= sum + i)
//		{
//			if (i % 2 == 0) //i��¦���� ���м��� �����ϴ� ���� 1 �и� i ������ �ϳ�
//			{
//				int k = (n - sum) % (i+1);  //k�� �ݺ�
//				a = i; b = 1;
//				for (int j = 1; j < k; j++)
//				{
//					b++; a--;
//				}
//				break;
//			}
//			else { //i�� Ȧ���� ���м��� ����  ���� i �и�1 ���� �� �ϳ� 
//				int k = (n - sum) % (i+1);
//				a = 1; b = i;
//				for (int j = 1; j < k; j++)
//				{
//					a++; b--;
//				}
//				break;
//			}
//		}
//		sum += i;
//	}
//	printf("%d/%d", b, a);
//
//}