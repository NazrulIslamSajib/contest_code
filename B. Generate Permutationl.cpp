#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
      long long n,i;
      cin>>n;
      if(n==1)
      {
          cout<<1<<endl;
      }
      else if(n%2==1)
      {
          long long mid=(n+1)/2;
          long long arr[n+10];
          arr[mid]=1;
          int cnt=3;
          for(i=1;i<=mid-1;i++)
          {
              arr[i]=cnt;
              cnt+=2;
          }
          cnt=2;
          for(i=n;i>=mid+1;i--)
          {
              arr[i]=cnt;
              cnt+=2;
          }
          for( i=1;i<=n;i++)
          {
              cout<<arr[i]<<" ";
          }
          cout<<endl;
      }
      else
      {
          cout<<-1<<endl;
      }
    }
    return 0;
}
