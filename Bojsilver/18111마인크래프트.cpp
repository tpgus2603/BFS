//#include<iostream>
//#include<stack>
//#include<vector>
//#include<utility>
//#include<algorithm>
//#define X first
//#define Y second
//using namespace std;
//
//bool timecmp(pair<int, int> a, pair<int, int>b)
//{
//	if (a.X != b.X)
//		return a.X < b.X;
//	else
//		return a.Y > b.Y;
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n, m, b;
//	cin >> n >> m >> b;
//	vector<int>arr;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		for (int j = 0; j < m; j++)
//		{
//			cin >> temp;
//			arr.push_back(temp);
//			sum += temp;
//		}
//	}
//	int size = n * m;
//	vector<pair<int,int>>time;
//	int h = 0; //���� h
//	while ((sum + b) >= size * h) //���� h����
//	{
//		pair<int, int>time2 = { 0,h };//�ð��� ���� 
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i] > h) //���� ���̺��� ū��� �ð�-2�� and����
//			{
//				time2.X += (arr[i] - h) * 2;
//			}
//			else if (arr[i] < h)
//			{
//				time2.X += (h - arr[i]) * 1;
//			}
//		}
//		time.push_back(time2);
//		h++;
//		if (h == 257)
//			break;
//	}
//	sort(time.begin(), time.end(), timecmp);
//	cout << time[0].X << " " << time[0].Y;
//	
//}