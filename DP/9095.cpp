#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int testn;
	int arr[12];
	arr[1] = 1; arr[2] = 2; arr[3] = 4;
	for (int i = 4; i < 12; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	cin >> testn;
	for (int i = 0; i < testn; i++)
	{
		int n;
		cin >> n;
		cout << arr[n] << '\n';

	}



}