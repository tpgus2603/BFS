//#include<iostream>
//
//int arr[15][15] = {0};
//bool qexi[15]; //�� 
//int cnt[1] = { 0 };
//using namespace std;
//
//int n;
//
//void arrinital(int row)
//{
//	for (int i = 0; i < 15; i++)
//	{
//		
//		arr[row][i] = 0;
//		qexi[row] = 0;
//	}
//}
//
//void nqueen(int row,int col)
//{
//	if (row >= n) //����࿡ �� �ڸ� ã���� 
//	{
//		arrinital(row - 1);
//		cnt[0]++;
//		return;
//	}
//	else if (row < 0)
//		return;
//	else {
//		for (int j = col; j < n; j++) //��
//		{
//			bool meet = false;
//			if (!qexi[row])//�ش� �࿡ q�� ���°�� 
//			{
//				for (int a = 0; a < n; a++)//�ش� �ڸ��� ���� �������� ��������Ž��
//				{
//					if (arr[row][a] == 1) //���� ��
//					{
//						meet = true;
//						break;
//					}
//					else if (arr[a][j] == 1) //���� ��
//					{
//						meet = true;
//						break;
//					}
//					else if (j - row + a >= 0)  //�밢�� ��
//					{
//						if (arr[a][j - row + a] == 1)
//						{
//							meet = true;
//							break;
//						}
//
//					}
//					else if (row + j - a >= 0)  //�밢�� ��
//					{
//						if (arr[a][row + j - a] == 1)
//						{
//							meet = true;
//							break;
//						}
//					}
//				}  //�� ���� �ڸ��� ���� �ִ°�� 
//				�� �ȸ����� ���
//				if (meet == true)
//				{
//					if (j == n - 1)  //�࿡�� �� ���� �ڸ� ��ã�� ��� ���� ������ ��Ʈ��ŷ
//					{
//						for (int i = 0; i < n; i++)
//						{
//							if (arr[row - 1][i] == 1)
//							{
//								arr[row - 1][i] = 0;
//								qexi[row - 1] = 0;
//								nqueen(row - 1, i + 1); //���������� ��Ʈ��ŷ ���ƿ°Ÿ� ã���Ŵ�.. �׷� ������ 
//							}
//						}
//					}
//					continue;
//				}
//				arr[row][j] = 1;//�� ���� 
//				qexi[row] = 1;
//				nqueen(row + 1, 0); //���� �࿡���� ������
//				continue;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	nqueen(0, 0);
//	cout << cnt[0];
//
//
//}
