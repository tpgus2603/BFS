//#include<iostream>
//#include<utility>
//#include<vector>
//#include<algorithm>
//
//#define X first
//#define Y second
//
//using namespace std;
//vector<int>cnt;
//vector<pair<int, int>>cctv;
//int arr[8][8] = { -1};
//int n, m;
//void leftside(pair<int, int> c,vector<pair<int,int>>&back)
//{
//	for (int i = c.Y; i >= 0; i--) //2. <-�� Ž�� 
//	{
//		if (arr[c.X][i] == 0 )
//		{
//			arr[c.X][i] = -1;
//			back.push_back({c.X,i});
//			
//		}
//		else if (arr[c.X][i] == 6)
//			break;
//	}
//}
//
//void rightside(pair<int, int> c, vector<pair<int, int>>&back)
//{
//	for (int i = c.Y; i < m; i++)//1. ->�� Ž���ϴ°��
//	{
//		if (arr[c.X][i] == 0)
//		{
//			arr[c.X][i] = -1;
//			back.push_back({ c.X,i });
//		}
//		else if (arr[c.X][i] == 6)
//			break;
//	}
//}
//
//void upside(pair<int, int> c, vector<pair<int, int>> &back)
//{
//	for (int i = c.X; i>=0; i--) //3. ���� Ž�� 
//	{
//		if (arr[i][c.Y] == 0 )
//		{
//			arr[i][c.Y] = -1;
//			back.push_back({ i,c.Y });
//		}
//		else if (arr[i][c.Y] == 6)
//			break;
//	}
//}
//void downside(pair<int, int> c, vector<pair<int, int>> &back)
//{
//	for (int i = c.X; i< n; i++) //4. �Ʒ��� Ž�� 
//	{
//		if (arr[i][c.Y] == 0 )
//		{
//			arr[i][c.Y] = -1; //�湮�� �Ϸ��ϸ� -1�� ä������ 
//			back.push_back({ i,c.Y });
//		}
//		else if (arr[i][c.Y] == 6)
//			break;
//	}
//}
//
//void totalcnt(int cur)
//{
//	if (cur == cctv.size())
//	{
//		int cntn = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (arr[i][j] == -1)
//					cntn++;
//			}
//		}
//		cnt.push_back(cntn);
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)//i=0~3==angle==0��~270��
//	{
//		int x = cctv[cur].X;
//		int y = cctv[cur].Y;
//		vector<pair<int, int>> backarr;
//		if (arr[x][y] == 1)
//		{
//			if (i == 0)
//			{
//				rightside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//			else if (i == 1)
//			{
//				leftside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//			else if (i == 2)
//			{
//				upside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//		
//			else if (i == 3)
//			{
//				downside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//	
//
//		}
//		else if (arr[x][y] == 2)
//		{
//			if (i == 0||i==2)
//			{
//				rightside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//
//			}
//			else if (i == 1||i==3)
//			{
//				upside(cctv[cur], backarr);
//				downside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//		}
//		else if (arr[x][y] == 3)
//		{
//			if (i == 0)
//			{
//				upside(cctv[cur], backarr);
//				rightside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//
//			}
//			else if (i == 1)
//			{
//				upside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//			else if (i == 2)
//			{
//				downside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//			else if (i == 3)
//			{
//				downside(cctv[cur], backarr);
//				rightside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//		}
//		else if (arr[x][y] == 4)
//		{
//			if (i == 0)
//			{
//				upside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				rightside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//			else if (i == 1)
//			{
//				upside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				downside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//			else if (i == 2)
//			{
//				rightside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				downside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//
//			}
//			else if (i == 3)
//			{
//				upside(cctv[cur], backarr);
//				leftside(cctv[cur], backarr);
//				downside(cctv[cur], backarr);
//				totalcnt(cur + 1);
//			}
//		}
//		else if (arr[x][y] == 5) //������ ������� ��Ʈ��ŷ �������� break;
//		{
//			upside(cctv[cur], backarr);
//			leftside(cctv[cur], backarr);
//			rightside(cctv[cur], backarr);
//			downside(cctv[cur], backarr);
//			totalcnt(cur + 1);
//		}
//		for (auto k : backarr)
//		{
//			arr[k.X][k.Y] = 0;
//		}
//
//	}
//
//}
//int main()
//{
//	cin >> n >> m;
//	vector<pair<int,int>>wall;
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		for (int j = 0; j < m; j++)
//		{
//			cin >> temp;
//			if (temp != 0 && temp != 6)
//				cctv.push_back({i,j});
//			else if (temp == 6)
//				wall.push_back({ i,j });
//			arr[i][j] = temp;
//		}
//	}
//	
//	int roomn = n * m - cctv.size() - wall.size();//��ü �濡�� cctv�� ���� ���� ������ 
//	if (!cctv.empty())
//	{
//		totalcnt(0);
//		auto k = max_element(cnt.begin(), cnt.end());
//		cout << roomn - *k;
//	}
//	else
//	{
//		cout << roomn;
//	}
//}