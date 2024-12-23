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
      long long n;
      cin>>n;
      long long arr[n+10],arr1[n+10];
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
      }
      for(int i=1;i<=n;i++)
      {
          cin>>arr1[i];
      }
      long long sum=0;
      for(int i=1;i<=n;i++)
      {
          if(i==n)
          {
              sum+=arr[i];
          }
          else if(i!=n && arr[i]>arr1[i+1])
          {
              sum+=arr[i]-arr1[i+1];
          }
      }
      cout<<sum<<endl;
    }
    return 0;
}
