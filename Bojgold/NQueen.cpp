#include <iostream>
using namespace std;
bool col[30]; // �� �� �����ϰ� �ִ��� Ȯ��
bool isused2[30]; // ���� ���� �밢���� �����ϰ� �ִ���
bool isused3[30]; // ����  ���� �밢���� �����ϰ� �ִ���

int cnt = 0;
int n;
void func(int cur) {  //cur�� ������
   if (cur == n) { // 
       cnt++;
       return;
   }
   for (int i = 0; i < n; i++) { // 0~n-1������ ���� ��ȸ 
       if (col[i] || isused2[i + cur] || isused3[cur - i + n - 1]) // ���� ������ �ڸ��ΰ��  n-1�� �ε����� ������ �ȵǱ� ����
           continue;
       col[i] = 1;
       isused2[i + cur] = 1;
       isused3[cur - i + n - 1] = 1;
       func(cur + 1);
       col[i] = 0;
       isused2[i + cur] = 0;
       isused3[cur - i + n - 1] = 0;
   }
}
int main(void) {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cin >> n;
   func(0);
   cout << cnt;
}