//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define ll long long
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n;
//	cin >> n;
//	vector<ll> arr;
//	ll temp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		arr.push_back(temp);
//	}
//	sort(arr.begin(), arr.end());
//
//	int cnt = 0;
//	int maxcnt = cnt;
//	int maxidx = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] == arr[i - 1]) //���ӵȼ��� ���Ë� cnt���� 
//		{
//			cnt++;
//			if (i == n - 1) //���� ����ū ���� �������ϋ�
//			{
//				if (maxcnt < cnt) //����ū���� ���� ������ 
//				{
//					maxcnt = cnt;
//					maxidx = i;
//				}
//			}
//		}
//		else if (cnt > 0 && arr[i] != arr[i - 1])//�ٸ����� ���ö� ī��Ʈ ����
//		{
//			if (maxcnt < cnt)//�������� ���� x
//			{
//				maxcnt = cnt;
//				maxidx = i-1;
//			}
//			cnt = 0;
//		}
//	}
//	cout << arr[maxidx];
//
//
//
//}