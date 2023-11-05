#include <iostream>
using namespace std;

int n, m;
int arr[8]; //���
bool isused[9]; //��뿩�� 

void func(int k) { // ���� k+1�ڸ����� ���� 
	if (k == m) { // m���� ��� ��������
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' '; // arr�� ����ص� ���� ���
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) { // 1���� n������ ���� ����
		if (!isused[i]){ // ���� i�� ������ �ʾ�����
			if (k != 0 && arr[k - 1] < i)
			{
				arr[k] = i; // k��° ���� i�� ����
				isused[i] = 1; // i�� ���Ǿ��ٰ� ǥ��
				func(k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
				isused[i] = 0; //���ƿ����� �� ���ѰŴ� �������� ä��� �̻������ �ٲ� 
			}
			else if (k == 0)
			{
				arr[k] = i; // k��° ���� i�� ����
				isused[i] = 1; // i�� ���Ǿ��ٰ� ǥ��
				func(k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
				isused[i] = 0; //���ƿ����� �� ���ѰŴ� �������� ä��� �̻������ �ٲ� 
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