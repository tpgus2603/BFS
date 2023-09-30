//#include<iostream>
//#include<utility>
//#include<queue>
//#include<string>
//using namespace std;
//
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//
//bool vis[100][100]; // �ش� ĭ�� �湮�ߴ���
//int dx[4] = { 1,0,0,-1 };
//int dy[4] = { 0,1,-1,0 };
//template <typename T>
//int  bfsSerach(queue <T>& q, int board[][100], int n, int m) //depth�� �����ϴ� ��� 
//{
//	int sum = 0;
//	int depth = 1;
//	queue<pair<int, int>> temp;
//	temp = q; //ť ���� 
//	while (!q.empty())
//	{
//		pair<int, int>cur = q.front(); q.pop(); sum++;
//		temp.pop();
//		if (cur.X == n - 1 && cur.Y == m - 1)
//		{
//			return depth;
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = cur.X + dx[i];
//			int ny = cur.Y + dy[i];
//			if (nx >= n || nx < 0 || ny >= m || ny < 0)continue;
//			if (vis[nx][ny] || board[nx][ny] != 1)continue;
//			q.push({ nx,ny });
//			vis[nx][ny] = 1;
//		}
//		if (temp.empty())
//		{
//			temp = q; //��� �ٽú���
//			depth++;
//		}
//	}
//	return depth;
//}
//template <typename T>
//int  bfsSerach2(queue <T>& q, int board[][100], int n, int m) //����������
//{
//	int sum = 0;
//	int depth = 1;
//	int dst[102][102] = { 0 };;//�迭�� ũ��� �Ȱ��� �������ָ� �� 
//	while (!q.empty())
//	{
//		pair<int, int>cur = q.front(); q.pop(); sum++;
//		if (cur.X == n - 1 && cur.Y == m - 1)
//		{
//			return dst[cur.X][cur.Y] + 1;
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = cur.X + dx[i];
//			int ny = cur.Y + dy[i];
//			if (nx >= n || nx < 0 || ny >= m || ny < 0)continue;
//			if (vis[nx][ny] || board[nx][ny] != 1)continue;
//			q.push({ nx,ny });
//			vis[nx][ny] = 1;
//			dst[nx][ny] = dst[cur.X][cur.Y] + 1;
//		}
//	}
//	return depth;
//}
//
//
//
//int main()
//{
//	int n, m;
//	string num;
//	int arr[100][100] = { 0 };
//	cin >> n >> m;
//	queue<pair<int, int>> q;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		for (int j = 0; j < m; j++)
//		{
//			arr[i][j] = num[j] - '0';
//		}
//	}
//	q.push({ 0,0 });
//	vis[0][0] = 1;
//	int depth=bfsSerach2(q, arr, n, m);
//	cout << depth;
//
//}
//
//
