//#include<queue>
//#include<iostream>
//#include<vector>
//#include<utility>
//
//using namespace std;
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//
//bool visit[1002][1002]; // �� 1�̸� ���� 
//int dx[4] = { 1,0,0,-1 };
//int dy[4] = { 0,1,-1,0 };
//template <typename T>
//int  bfsSerach(queue <T>& q, vector<vector<int>>& board, int n, int m, pair<int, int>j, vector<pair<int, int>>f) //depth�� �����ϴ� ������� day����
//{
//	int day = 1;
//	queue<pair<int, int>> temp1;
//	queue<pair<int, int>> temp2;
//	queue<pair<int, int>>fi = q; 
//	q.push(j);
//	while (!f.empty())
//	{
//		fi.push(f.back());
//		f.pop_back();
//	}
//	temp1 = q;
//	temp2 = fi;
//	bool excape = false;
//	while (!q.empty())
//	{
//		if (!fi.empty())
//		{
//			while (!temp2.empty()) //�ҹ����� ���� �������� 
//			{
//				pair<int, int>fcur = fi.front(); fi.pop();
//				temp2.pop();
//				for (int i = 0; i < 4; i++)
//				{
//					int nx = fcur.X + dx[i];
//					int ny = fcur.Y + dy[i];
//					if (nx >= n || nx < 0 || ny >= m || ny < 0)continue;
//					if (visit[nx][ny] || board[nx][ny] == 0)continue;
//					fi.push({ nx,ny });
//					visit[nx][ny] = 1; //���̹������� �湮�Ѱ����� ���� 
//				}
//			}
//			if (temp2.empty())
//			{
//				temp2 = fi; //��� �ٽú���
//			}
//		}
//		while (!temp1.empty())
//		{
//			pair<int, int>jcur = q.front(); q.pop();
//			temp1.pop();
//			if (jcur.X == 0 || jcur.Y == 0 || jcur.X == n - 1 || jcur.Y == m - 1)
//			{
//				excape = true; return day;
//			}
//			for (int i = 0; i < 4; i++) //j�� �̵��ϴ� �������� 
//			{
//				int nx = jcur.X + dx[i];
//				int ny = jcur.Y + dy[i];
//				if (nx >= n || nx < 0 || ny >= m || ny < 0)continue;
//				if (visit[nx][ny] || board[nx][ny] == 0)continue;
//				q.push({ nx,ny });
//				visit[nx][ny] = 1;
//			}
//		}
//		if (temp1.empty())
//		{
//			temp1 = q; //��� �ٽú���
//			day++;
//		}
//	}
//	if (excape)
//		return day;
//	else
//		return -1;
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	string temp;
//	vector<vector<int>> arr(1000);
//	pair<int, int>j;
//	vector<pair<int, int>>f;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		for (int k = 0; k < m; k++)
//		{
//			if (temp[k] == 'J' || temp[k] == '.')
//			{
//				arr[i].push_back(1);
//				if (temp[k] == 'J')
//					j = { i,k };
//			}
//			else if (temp[k] == 'F' || temp[k] == '#') //�ҳ��� Ȥ�� ����0
//			{
//				arr[i].push_back(0);
//				if (temp[k] == 'F')
//					f.push_back({ i,k });
//			}
//
//		}
//	}
//	queue<pair<int, int>>q;
//	int day = bfsSerach(q,arr, n, m, j, f);
//	if (day == -1)
//	{
//		cout << "IMPOSSIBLE";
//	}
//	else
//	{
//		cout << day;
//	}
//
//
//}


//#include <bits/stdc++.h>
//using namespace std;
//#define X first
//#define Y second
//string board[1002];
//int dist1[1002][1002]; // ���� ���� �ð�
//int dist2[1002][1002]; // �������� �̵� �ð�
//int n, m;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        fill(dist1[i], dist1[i] + m, -1);
//        fill(dist2[i], dist2[i] + m, -1);
//    }
//    for (int i = 0; i < n; i++)
//        cin >> board[i];
//    queue<pair<int, int> > Q1;
//    queue<pair<int, int> > Q2;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (board[i][j] == 'F') {
//                Q1.push({ i,j });
//                dist1[i][j] = 0;
//            }
//            if (board[i][j] == 'J') {
//                Q2.push({ i,j });
//                dist2[i][j] = 0;
//            }
//        }
//    }
//    // �ҿ� ���� BFS
//    while (!Q1.empty()) {
//        auto cur = Q1.front(); Q1.pop();
//        for (int dir = 0; dir < 4; dir++) {
//            int nx = cur.X + dx[dir];
//            int ny = cur.Y + dy[dir];
//            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//            if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;
//            dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
//            Q1.push({ nx,ny });
//        }
//    }
//
//    // �����̿� ���� BFS
//    while (!Q2.empty()) {
//        auto cur = Q2.front(); Q2.pop();
//        for (int dir = 0; dir < 4; dir++) {
//            int nx = cur.X + dx[dir];
//            int ny = cur.Y + dy[dir];
//            if (nx < 0 || nx >= n || ny < 0 || ny >= m) { // ������ ����ٴ� ���� Ż�⿡ �����ߴٴ� �ǹ�. ť�� �Ÿ� ������ ���Ƿ� ���ʿ� Ż���� �ð��� ����ϸ� ��.
//                cout << dist2[cur.X][cur.Y] + 1;
//                return 0;
//            }
//            if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
//            if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) continue; // ���� ���� �ð��� ���ǿ� �߰�
//            dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
//            Q2.push({ nx,ny });
//        }
//    }
//    cout << "IMPOSSIBLE"; // ���⿡ �����ߴٴ� ���� Ż�⿡ ���������� �ǹ�.
//}