#include <iostream>
using namespace std;

int n, m;
int arr[8]; //���

void func(int k) { // ���� k+1�ڸ����� ���� 
	if (k == m) { // m���� ��� ��������
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' '; // arr�� ����ص� ���� ���
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) { // 1���� n������ ���� ����
		{ // ���� i�� ������ �ʾ�����
			if (k != 0 && arr[k - 1] <= i)
			{
				arr[k] = i; // k��° ���� i�� ����
				func(k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
			}
			else if (k == 0)
			{
				arr[k] = i; // k��° ���� i�� ����
				func(k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	func(0);
}