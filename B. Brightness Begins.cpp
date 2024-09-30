#include<bits/stdc++.h>
using namespace std;
long long call(long long a)
{
    long long x=sqrt(a)+2;
    while(x*x>a)
        x--;
    return x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
       long long k;
       cin>>k;
       unsigned long long l=0,r=1e19,ans;
       while(l<=r)
       {
           unsigned long long mid=(l+r)>>1;
           unsigned long long root=call(mid);
         ///  cout<<root<<endl;
           if(mid-root>=k)
           {
               ans=mid;
               r=mid-1;
           }
           else
           {
               l=mid+1;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}
