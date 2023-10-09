#include<iostream>
#include<queue>
#include<vector>

using namespace std;

#define X first
#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���

bool comple[1000][1000]; // �ش� ĭ�� �湮�ߴ���
int dx[4] = { 1,0,0,-1 };
int dy[4] = { 0,1,-1,0 };
vector<pair<int, int>>zeroarr;
template <typename T>
int  bfsSerach(queue <T>& q, vector<vector<int>>& board, int n, int m) //depth�� �����ϴ� ��� 
{
	int sum = 0;
	int depth = 0;
	queue<pair<int, int>> temp;
	temp = q; //ť ���� 
	while (!q.empty())
	{
		pair<int, int>cur = q.front(); q.pop(); 
		temp.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx >= n || nx < 0 || ny >= m || ny < 0)continue;
			if (comple[nx][ny] || board[nx][ny] == -1)continue;
			q.push({ nx,ny });
			comple[nx][ny] = 1;
			zeroarr.pop_back();
		}
		if (temp.empty())
		{
			temp = q; //��� �ٽú���
			depth++;
		}
	}
	if(zeroarr.empty())
		return depth - 1;
	else
		return -1;
}
int main()
{
	int n, m;
	cin >> m >> n;
	vector<vector<int>> arr(1000);
	int temp;
	queue<pair<int, int>> comque;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> temp;
			arr[i].push_back(temp);
			if (temp == 1)
			{
				comque.push({ i,j }); //������ �ֱ� 
				comple[i][j] = 1;
			}
			if(temp==0)
				zeroarr.push_back({ i,j });
		}
	}
	int depth = bfsSerach(comque, arr, n, m);
	cout << depth;

}



#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
int dist[1002][1002]; //����Ʈ��0
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    queue<pair<int, int> > Q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({ i,j });
            if (board[i][j] == 0)
                dist[i][j] = -1; //���������� ���Ͱ� �Ǹ� -1�� ����ϱ����� 
        }
    }
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({ nx,ny });
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[i][j] == -1) {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
}