//#include<queue>
//#include<iostream>
//#include<vector>
//#include<utility>
//
//#define X first
//#define Y second
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int testn, n, m;
//	cin >> testn;
//	for (int i = 0; i < testn; i++)
//	{
//		deque<pair<int,int>>queue; //�߿䵵�� ���� ���� 
//		cin >> n >> m;
//		for (int j = 0; j < n; j++)
//		{
//			int temp;
//			cin >> temp; //�߿䵵 
//			queue.push_back({temp,j});
//		}
//		int cnt = 0;//�μ�Ǵ� ����
//		pair<int, int>target = queue[m]; 
//		int k = 0;
//		bool end = true;
//		while (end)
//		{
//
//			for (int i = 0; i < queue.size(); i++)
//			{
//				int max = queue[0].X;
//				for (int a = 0; a < queue.size(); a++) //���� ť�� ���� ���� �߿䵵 ���� 
//				{
//					if (max < queue[a].X)
//						max = queue[a].X;
//				}
//				if (queue[0].X == max) //�߿䵵 ���� ū��� 
//				{
//					if (queue[0] == target) 
//					{
//						end = false;
//						cnt++;
//						break;
//					}
//					else  //�ϴ� ť���� ������ Ƚ�� ���� 
//					{
//						queue.pop_front();
//						cnt++;
//					}
//				}
//				else {//����ū ��찡 �ƴѰ�� ������ ť�� �ڿ� �������
//					auto temp = queue.front();
//					queue.pop_front();
//					queue.push_back(temp);
//				}
//			}
//
//		}
//
//		cout << cnt << '\n';
//	}
//
//
//}