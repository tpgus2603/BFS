#include<iostream>
#include<algorithm>

using namespace std;
int arr[10000];
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  long long cnt=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      auto it1=lower_bound(arr+j+1,arr+n,-(arr[i]+arr[j]));
      auto it2=upper_bound(arr+j+1,arr+n,-(arr[i]+arr[j]));
      cnt+=(it2)-(it1);
    }
  }

  cout<<cnt;


}