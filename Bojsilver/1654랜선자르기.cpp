//#include<iostream>
//#include<vector>
//#include<stack>
//#include<algorithm>
//
//
//using namespace std;
//stack<long long>cnt;
//void binarySearch(vector<int>& arr, int n, long long first, long long end) //������ ���̸� �̺�Ž������ ���� 
//{
//	if (first >end)//��� �������ǿ� ��ȣ�� ������ end�� ���ϴ°��� �ִ°�� ����� �ȵ� 
//		return;
//	int size = arr.size();
//	long long sum = 0;
//	long long len = (first + end) / 2;
//	for (int i = 0; i < size; i++)
//	{
//		sum += (arr[i] / len);
//	}
//	if (sum >= n)  //������� ���� ���� ��ǥ���� ������� ���� ������ ���� �÷� ������ �ø���
//	{
//		cnt.push(len);
//		binarySearch(arr, n, len+1 , end);
//	}
//	else if (sum < n) //������ ���� ���̱� �׳� len��� ���κ� Ž�� �Ұ�  
//	{
//		binarySearch(arr, n, first, len-1); >������ len-1
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(0); cin.tie(0);
//	long long k, n, temp;
//	vector<int> arr;
//	cin >> k >> n;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> temp;
//		arr.push_back(temp);
//	}
//	sort(arr.begin(), arr.end());
//	
//	binarySearch(arr, n, 1, arr[k - 1]);
//	long long temp2 = cnt.top();
//	cout << temp2;
//
//	
//}