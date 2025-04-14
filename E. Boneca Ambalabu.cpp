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
        long long arr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        map<long long,long long>mp;
        for(int i=1;i<=n;i++)
        {
            for(long long j=30;j>=0;j--)
            {
                  if((1LL<<j)&arr[i])
                  {
                      mp[j]++;
                  }
            }
        }
        long long max1=-1e18,need=arr[1];
        for(int i=1;i<=n;i++)
        {
             long long ans=0;
             map<long long,long long>mp1=mp;
             for(long long j=0;j<=30;j++)
             {
                  if((1LL<<j)&arr[i])
                  {
                      long long take=1LL<<j;
                     // cout<<n-mp1[j]<<endl;
                      ans+=((n-mp1[j])*take*1ULL);
                      ans-=(take*mp1[j]*1ULL);
                  }
             }
             if(max1<=ans)
             {
                 max1=ans;
                 need=arr[i];
             }
        }
        ///cout<<max1<<endl;
        unsigned long long sum=0;
        //cout<<need<<endl;
        for(int i=1;i<=n;i++)
        {
            sum+=(arr[i]^need);
        }
        cout<<sum<<endl;
    }
    return 0;
}
