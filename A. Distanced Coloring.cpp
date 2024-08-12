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
       long long n,m,k;
       cin>>n>>m>>k;
       long long min1=min(n,k);
       long long min2=min(m,k);
       long long ans=1LL*min1*min2;
       cout<<ans<<endl;
    }
    return 0;
}
 
