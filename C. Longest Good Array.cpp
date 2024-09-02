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
       long long l,r;
       cin>>l>>r;
       if(l==r)
       {
           cout<<1<<endl;
           continue;
       }
       long long prev=l;
       l++;
       long long ans=2;
       while(1)
       {
           long long need=(2*l)-prev+1;
           prev=l;
           if(need<=r)
           {
              ans++;
              l=need;
           }
           else
           {
               break;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}
