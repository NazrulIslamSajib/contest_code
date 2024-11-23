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
        long long x,m;
        cin>>x>>m;
        long long ans=0,i;
        for(i=1;i<=min(2*x,m);i++)
        {
            if(i!=x)
            {
                long long ok=i^x;
                if(i%ok==0 || x%ok==0)
                {
                    ans++;
                    ///cout<<i<<endl;
                    ///cout<<i<<" "<<ok<<endl;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
