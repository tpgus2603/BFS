//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n,k;
//	vector<int> arr;
//	stack<int> stk;
//	stack<int>idx;
//	cin >> n;
//	for (int i = 0; i<n; i++) //�ϴ� �迭�� 
//	{
//		cin >> k;
//		arr.push_back(k);
//	}
//	int temp;
//	idx.push(n);
//	vector<int>cnt(n);
//	for (int i = n-1; i>=0; i--)//���ʺ��� �ٽ� ��ȸ 
//	{
//		temp = arr[i];
// 
//		while (!stk.empty() && temp > stk.top())
//		{
//			stk.pop(); //���� ž pop
//			if (i == 0)
//			{
//				cnt[idx.top()] = -1; //ù ���Ҹ� ����Ű�°� ����ǥ�� 
//				idx.pop();
//			}
//			else {
//				cnt[idx.top()] = i; //��� 
//				idx.pop();
//			}
//		}
//		stk.push(temp); //������������ stack�� �ֱ� 
//		idx.push(i);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if(cnt[i]==0)
//			cout << cnt[i] << " ";
//		else if (cnt[i] == -1)
//		{
//			cout << 1 << " ";
//		}
//		else
//			cout << cnt[i] + 1 << " ";
//	}
//}