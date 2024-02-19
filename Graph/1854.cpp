#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>

#define C first
#define V second
using namespace std;
// ��� k���� ������ �ڷᱸ���� �ʿ��ϴ�... ���߿��� k���� �����ϴµ� ��Ȯ�� k��°ũ�Ⱑ �ʿ��ϹǷ� �ִ����� Ȱ���Ѵ�

vector<pair<int, int>> adj[1001];
priority_queue<int> heap[1001];
int n, m, k;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m >> k;
  int a, b, c;
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b >> c;
    adj[a].push_back({c, b});
  }
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  heap[1].push(0);
  pq.push({heap[1].top(), 1});
  while (!pq.empty())
  {
    auto cur = pq.top();
    pq.pop();
    for (auto nxt : adj[cur.V])
    {
      int cost = cur.C + nxt.C;
      if (heap[nxt.V].size() < k)
      {
        heap[nxt.V].push(cost);
        pq.push({cost, nxt.V});
      }
      else if (heap[nxt.V].top() > cost)
      {
        heap[nxt.V].push(cost);
        heap[nxt.V].pop();
        pq.push({cost, nxt.V});
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (heap[i].size() != k)
      cout << -1 << '\n';
    else
      cout << heap[i].top() << '\n';
  }
}