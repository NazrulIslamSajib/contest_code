#include<bits/stdc++.h>
using namespace std;
int const mod=1e9+7;
long long modvalue(long long base,long long power,long long mod1)
{
        long long res=1;
        while(power)
        {
            if(power%2==1)
            {
                res=(base%mod1)*(res%mod1);
                power--;
            }
            else
            {
                base=(base%mod1)*(base%mod1);
                power=power/2;
            }
        }
        return res%mod1;
}
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
       long long arr[n+10],pre[n+10],i;
       pre[0]=0;
       for(i=1;i<=n;i++)
       {
          cin>>arr[i];
       }
       for(i=1;i<=n;i++)
       {
           pre[i]=pre[i-1]+arr[i];
       }
       long long sum=0;
       for(i=1;i<=n-1;i++)
       {
           long long cursum=pre[n]-pre[i];
           long long curmul=((arr[i]%mod)*(cursum%mod))%mod;
           sum=(sum%mod+curmul%mod)%mod;
       }
       long long q;
       q=(n*1LL*(n-1))/2;
       long long curmod=1e9+7;
       long long curq=modvalue(q,curmod-2,curmod);
       long long ans=(sum%mod*curq%mod)%mod;
       cout<<ans<<endl;

    }
    return 0;
}
