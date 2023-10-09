#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<utility>

#define D first
#define V second
#define I 1e9
using namespace std;

int v,e,st;
vector<pair<int,int>> adj[20001];

int d[20001];

void dkstra()
{
  fill(d, d + v + 1, I);
  // �Ÿ��� �̿����� ������ ��� ��
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  d[st] = 0;
  pq.push({d[st], st});
  while (!pq.empty())
  {
    auto cur = pq.top();
    pq.pop();
    if (d[cur.V] != cur.D) // ���̺��� ���� ���ӿ� ����� �Ÿ��� �ٸ���
      continue;
    for (auto nxt : adj[cur.V])
    {
      if (d[nxt.V] <= d[cur.V] + nxt.D) // ����+������ �ּҰ��� �ƴѰ��
        continue;
      d[nxt.V] = d[cur.V] + nxt.D; // �ּҰ� ����
      pq.push({d[nxt.V], nxt.V});   // �����ֱ�
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>v>>e>>st;
  while(e--)
  {
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({w,v});
  }
  dkstra();
  for(int i=1;i<=v;i++)
  {
    if(d[i]==I)
      cout<<"INF"<<'\n';
    else
      cout<<d[i]<<'\n';
  }



}