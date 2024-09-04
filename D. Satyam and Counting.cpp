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
        map<long long,long long>mp;
        map<pair<long long ,long long>,long long>check;
        long long z=n,up=0;
        set<long long>stx;
        while(n--)
        {
            long long x,y;
            cin>>x>>y;
            check[{x,y}]++;
            stx.insert(x);
            mp[x]++;
        }
        long long ans=0;
        for(int i=0;i<=z;i++)
        {
            if(mp[i]==2)
            {
                ans+=(z-2);
            }
        }
        vector<long long>vx,vy;
        for(auto x:stx)
        {
            vx.push_back(x);
        }
        for(int i=0;i<vx.size()-2;i++)
        {
            long long f=vx[i],s=vx[i+1],th=vx[i+2];
            long long left=(th-f)*(th-f);
            long long right=((s-f)*(s-f)+(th-s)*(th-s)+2);
            if(left==right && check[{f,0}]==1 && check[{s,1}]==1 && check[{th,0}]==1)
            {
                ans++;
            }
        }
        for(int i=0;i<vx.size()-2;i++)
        {
            long long f=vx[i],s=vx[i+1],th=vx[i+2];
            long long left=((th-f)*(th-f));
            long long right=((s-f)*(s-f)+(th-s)*(th-s)+2);
            if(left==right && check[{f,1}]==1 && check[{s,0}]==1 && check[{th,1}]==1)
            {
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
