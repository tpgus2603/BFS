//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n, m;
//	
//	cin >> n >> m;
//	vector<string>arr(n);
//	string str;
//	//���� �Է¹ޱ� 
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str;
//		arr[i] = str;
//	}
//	vector<int>cntarr; //���簢�� ������ �Է¹��� �迭 
//	int cnt1,cnt2,cnt;
//	for (int i = 0; i <= n - 8; i++)//���� �� ��ȭ
//	{
//		for (int j = 0; j <= m - 8; j++) //���� �� ��ȭ
//		{	
//			cnt1 = 0; cnt2 = 0; cnt; //
//			for (int k = i; k < i + 8; k++)//8x8�迭 ����� ��
//			{
//				for (int l = j; l < j + 8; l++)   //�� 
//				{
//					if (arr[i][j] == 'B')  //B�ν����ϴ� ��� ¦���� Ȧ���� ���� 
//					{   //ù��°��  �����ϴ� ���̽��� cnt1���μ� 
//						if (k % 2 == 0)
//						{
//							if (l % 2 == 0)
//							{
//								if (arr[k][l] != 'B') //w�ΰ��
//									cnt1++;
//								else //b�ΰ�� 
//									cnt2++;
//							}
//							else
//							{
//								if (arr[k][l] != 'W') 
//									cnt1++;
//								else //b�ΰ�� 
//									cnt2++;
//							}
//						}
//						else if (k % 2 == 1)
//						{
//							if (l % 2 == 0)
//							{
//								if (arr[k][l] != 'W') 
//									cnt1++;
//								else  
//									cnt2++;
//							}
//							else
//							{
//								if (arr[k][l] != 'B')
//									cnt1++;
//								else
//									cnt2++;
//							}
//
//						}
//						//W�� �ٲٴ� ��� cnt2�μ� 
//					}
//					else//w�ν����ϴ� ��� 
//					{ //w�� �����ϴ� ��� cnt1
//						if (k % 2 == 0)
//						{
//							if (l % 2 == 0)
//							{
//								if (arr[k][l] != 'W')
//									cnt1++;
//								else  
//									cnt2++;
//							}
//							else
//							{
//								if (arr[k][l] != 'B')
//									cnt1++;
//								else
//									cnt2++;
//
//							}
//
//						}
//						else if (k % 2 == 1)
//						{
//							if (l % 2 == 0)
//							{
//								if (arr[k][l] != 'B')
//									cnt1++;
//								else
//									cnt2++;
//							}
//							else
//							{
//								if (arr[k][l] != 'W')
//									cnt1++;
//								else
//									cnt2++;
//							}
//
//						}
//
//
//					}
//				}
//			}
//			cnt = min(cnt1, cnt2);
//			cntarr.push_back(cnt);
//		}
//	}
//	auto k = min_element(cntarr.begin(), cntarr.end());
//	cout << *k;
//}
//
//
////������ �ڵ�
////#include <iostream>
////#include <string>
////#include <algorithm>
////#include <utility>
////using namespace std;
////string WB[8] = {
////		"WBWBWBWB",
////		"BWBWBWBW",
////		"WBWBWBWB",
////		"BWBWBWBW",
////		"WBWBWBWB",
////		"BWBWBWBW",
////		"WBWBWBWB",
////		"BWBWBWBW"
////};
////string BW[8] = {
////		"BWBWBWBW",
////		"WBWBWBWB",
////		"BWBWBWBW",
////		"WBWBWBWB",
////		"BWBWBWBW",
////		"WBWBWBWB",
////		"BWBWBWBW",
////		"WBWBWBWB"
////};
////string board[50];
////int WB_cnt(int x, int y)
////{
////	int cnt = 0;
////	for (int i = 0; i < 8; i++)
////	{
////		for (int j = 0; j < 8; j++)
////		{
////			if (board[x + i][y + j] != WB[i][j])
////				cnt++;
////		}
////
////	}
////	return cnt;
////}
////int BW_cnt(int x, int y)
////{
////	int cnt = 0;
////	for (int i = 0; i < 8; i++)
////	{
////		for (int j = 0; j < 8; j++)
////		{
////			if (board[x + i][y + j] != BW[i][j])
////				cnt++;
////		}
////
////	}
////	return cnt;
////}
////int main() {
////	int size[2];
////	int cnt;
////	int min_val = 12345;
////	pair<int, int> p1;
////	cin >> p1.first >> p1.second;
////	for (int i = 0; i < p1.first; i++)
////		cin >> board[i];
////	for (int i = 0; i + 8 <= p1.first; i++)
////	{
////		for (int j = 0; j + 8 <= p1.second; j++)
////		{
////			int tmp;
////			tmp = min(WB_cnt(i, j), BW_cnt(i, j));
////			if (tmp < min_val) {
////				min_val = tmp;
////			}
////		}
////	}
////	cout << min_val;
////	return 0;
////}
