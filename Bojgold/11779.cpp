#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<utility>

#define D first
#define V second
#define I 1e9
using namespace std;

int v,e;
vector<pair<int,int>> adj[1001];

int d[1001];
int pre[1001];

void dkstra(int st)
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
      if (d[nxt.V] <=d[cur.V] + nxt.D) // ����+������ �ּҰ��� �ƴѰ��(�ε�ȣ ���� ���ϸ� �޸� ����)
        continue;
      d[nxt.V] = d[cur.V] + nxt.D; // �ּҰ� ����
      pre[nxt.V]=cur.V;
      pq.push({d[nxt.V], nxt.V});   // �����ֱ�
    }
  }
}
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>v>>e;
  while(e--)
  {
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({w,v});
  }
  int st,ed;
  cin>>st>>ed;
  dkstra(st);
  cout<<d[ed]<<'\n';
  vector<int> path;
  int temp=ed;
  while(temp!=st)
  {
    path.push_back(temp);
    temp=pre[temp];
  }
  path.push_back(st);
  int idx=path.size();
  cout<<idx<<'\n';
  for(int i=idx-1;i>=0;i--)
    cout<<path[i]<<" ";


}