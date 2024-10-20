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
       long long n,k;
       cin>>n>>k;
       long long arr[n+10];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       sort(arr+1,arr+n+1);
       long long presum=0,ans=k;
       for(int i=1;i<=n;i++)
       {
          long long mul=(n-i+1);
          long long sum=mul*arr[i]+presum;
          presum+=arr[i];
          if(sum>=k)
          {
              break;
          }
          else
          {
              ans++;
          }

       }
       cout<<ans<<endl;
    }
    return 0;
}
