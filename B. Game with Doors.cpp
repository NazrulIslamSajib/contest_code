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
       vector<pair<long long,long long>>v;
       long long u,vv,x,y;
       cin>>u>>vv;
       cin>>x>>y;
       v.push_back({u,vv});
       v.push_back({x,y});
       sort(v.begin(),v.end());
       int l=v[0].first;
       int r=v[0].second;
       int L=v[1].first;
       int R=v[1].second;
       if(r<L)
       {
           cout<<1<<endl;
       }
       else if(r>=R)
       {
           long long ok=abs(L-R)+2;
           if(l==L)
           {
               ok--;
           }
           if(R==r)
           {
             ok--;
           }
           cout<<ok<<endl;
       }
       else
       {
           long long ok=abs(r-L)+2;
           if(l==L)
           {
               ok--;
           }
           if(r==R)
           {
               ok--;
           }
           cout<<ok<<endl;
       }

    }
    return 0;
}
