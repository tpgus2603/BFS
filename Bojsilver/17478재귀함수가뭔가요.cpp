//#include<iostream>
//
//using namespace std;
//string answer1 = "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.";
//string answer2 = "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.";
//string answer3 = "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"";
//string question = "\"����Լ��� ������?\"";
//
//int N;
//void callrecur(int n)
//{
//	if (n == N+1)
//	{
//		for (int i = 1; i <n; i++)
//			cout << "____";
//		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\""<<'\n';
//		return;
//	}
//	for (int i = 0; i < n; i++)
//		cout << "____";
//	cout << question << '\n';
//	if (n != N)
//	{
//		for (int i = 0; i < n; i++)
//			cout << "____";
//		cout << answer1 << '\n';
//		for (int i = 0; i < n; i++)
//			cout << "____";
//		cout << answer2 << '\n';
//		for (int i = 0; i < n; i++)
//			cout << "____";
//		cout << answer3 << '\n';
//	}
//	callrecur(n + 1);
//		for (int i = 0; i < n; i++)
//			cout << "____";
//		cout << "��� �亯�Ͽ���." << '\n';
//
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	cin >> N;
//	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << '\n';
//	callrecur(0);
//
//
//}