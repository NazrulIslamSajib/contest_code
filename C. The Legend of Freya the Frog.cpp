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
       long long x,y,k;
       cin>>x>>y>>k;
       long long max1=max(x,y),min1=min(x,y);
       long long ok1=2*(min1/k);
       long long holo=(min1/k);
       holo=holo*k;
       long long baki=(max1-holo+k-1)/k;
       long long ans=baki*2+ok1;
       if(x>y)
       {
           ans--;
       }
       if(x>y && baki==1 && holo!=y)
       {
           ans++;
       }
       cout<<ans<<endl;
    }
    return 0;
}
