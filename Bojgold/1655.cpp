#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin>>n;
  priority_queue<int,vector<int>> max_pq; //���� �༮�� maxpq���ֱ� 
  priority_queue<int,vector<int>,greater<int>>min_pq; //->ū�༮�� minpq��
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    if(min_pq.size()>=max_pq.size())   // max_pqũ�Ⱑ ���ų� �� ���Ե�(¦���� ��� ������ ��ȯ�ؾ��ϱ⿡)
      max_pq.push(temp);
    else
      min_pq.push(temp);
    if(!min_pq.empty()&&max_pq.top()>min_pq.top()) //pqũ�� ����
    {
      min_pq.push(max_pq.top());
      max_pq.pop();
      max_pq.push(min_pq.top());
      min_pq.pop();
    }

    cout<<max_pq.top()<<'\n';

  }



}