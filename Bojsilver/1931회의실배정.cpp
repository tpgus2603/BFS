//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<vector>
//#include<stack>
//#define X first
//#define Y second
//
//using namespace std;
//
//bool cmp(pair<int, int> a, pair<int, int> b)
//{
//	if (a.Y != b.Y)
//		return a.Y < b.Y; //����ð� ���� �������� 
//	else
//		return a.X <b.X;//���ٸ� ���۽ð� ���� ��������  
//}
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	int n;
//	cin >> n;
//	vector<pair<int, int>>arr;
//	pair<int, int> temp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp.X; //���۽ð�
//		cin >> temp.Y; //����ð� 
//		arr.push_back(temp);
//	}
//	sort(arr.begin(), arr.end(), cmp);
//	stack<pair<int, int>>ruse;
//	ruse.push(arr[0]);
//	for (int i = 1; i < n; i++)
//	{
//		if (ruse.top().Y <= arr[i].X)  //�������� ����� ���ǽ��� ����ð����� ���۽ð��� ������� �߰� 
//			ruse.push(arr[i]); //���ǽ� ��� ���ÿ� ���� 
//	}
//	cout << ruse.size();
//}