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
        long long arr[m+10];
        for(int i=1;i<=m;i++)
        {
            cin>>arr[i];
        }
        map<long long,long long>mp;
        for(int i=1;i<=k;i++)
        {
            long long x;
            cin>>x;
            mp[x]++;
        }
        if(k==n)
        {
            for(int i=1;i<=m;i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else if(k==n-1)
        {
            for(int i=1;i<=m;i++)
            {
                if(mp[arr[i]])
                {
                    cout<<0;
                }
                else
                {
                    cout<<1;
                }
            }
            cout<<endl;
        }
        else
        {
            for(int i=1;i<=m;i++)
            {
                cout<<0;
            }
            cout<<endl;
        }
    }
    return 0;
}
