//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n, m;
//	cin >> n >> m; //n���� ���� m���� ����  
//	int arr[9] = { 0 };
//	int dupl[9] = { 0 };//�ߺ��ƴѰ�� 0
//	int i = 1;
//	int j = 0;
//	for (i = 1; i <= m; i++) //arr=�����迭�� ����� �� dupl�� �ߺ����� i�� �ڸ��� j�� ����ɼ� 
//	{
//		while (++j)
//		{
//			if (j == n + 1)
//			{
//				i -= 1;
//				j = arr[i];
//				for (int k = i; k <= m; k++)
//				{
//					dupl[arr[k]] = 0;
//					arr[k] = 0;
//				}
//				i -= 1;
//				break;
//
//			}
//			if (dupl[j] == 0)
//			{
//				arr[i] = j;
//				dupl[j] = 1;
//				j = 0;
//				break;
//			}
//		}
//		if (i == m) //������ ����� 
//		{
//			for (int k = 1; k <= m; k++)
//				cout << arr[k] << " ";
//			cout << '\n';
//			j = arr[i];
//			dupl[arr[i]] = 0;
//			i -= 1;
//			continue;
//
//		}
//		if (i < 0)
//			break;
//	}
//
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int arr[8]; //���
//bool isused[9]; //��뿩�� 
//
//void func(int k) { // ���� k+1�ڸ����� ���� 
//	if (k == m) { // m���� ��� ��������
//		for (int i = 0; i < m; i++)
//			cout << arr[i] << ' '; // arr�� ����ص� ���� ���
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; i++) { // 1���� n������ ���� ����
//		if (!isused[i]) { // ���� i�� ������ �ʾ�����
//			arr[k] = i; // k��° ���� i�� ����
//			isused[i] = 1; // i�� ���Ǿ��ٰ� ǥ��
//			func(k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
//			isused[i] = 0; //���ƿ����� �� ���ѰŴ� �������� ä��� �̻������ �ٲ� 
//		}
//	}
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	func(0);
//}