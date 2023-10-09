#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int temp;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // ���� ��ȣ�� ��Ÿ���� ���� ������� ������ 0 ����� 1
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    if (temp < 0) // �����ΰ�� Ȯ�α�ȣ 0 ����
    {
      pq.push({temp * (-1), 0});
    }
    else if (temp > 0)
    {
      pq.push({temp, 1});
    }
    else // 0�� ���°�� ���
    {
      if (!pq.empty())
      {
        auto k = pq.top();
        pq.pop();
        if (!k.second) // �����ΰ��
          cout << k.first * (-1) << '\n';
        else
          cout << k.first << '\n';
      }
      else
        cout<<'0'<<'\n';
    }
  }
}