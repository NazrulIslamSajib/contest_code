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
        long long n,m;
        cin>>n>>m;
        long long arr[n+10][m+10];
        map<long long,long long>mp,mp1,mp2;
        long long max1=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>arr[i][j];
                max1=max(arr[i][j],max1);
                mp[arr[i][j]]++;
            }
        }
        for(int i=1;i<=n;i++)
        {   long long cnt=0;
            for(int j=1;j<=m;j++)
            {
                if(arr[i][j]==max1)
                {
                    cnt++;
                }
            }
            mp1[i]=cnt;
        }
        for(int j=1;j<=m;j++)
        {
            long long cnt=0;
            for(int i=1;i<=n;i++)
            {
               if(arr[i][j]==max1)
               {
                   cnt++;
               }
            }
            mp2[j]=cnt;
        }
        int f=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                long long ans=mp1[i]+mp2[j];
                if(arr[i][j]==max1)
                {
                    ans--;
                }
                if(ans==mp[max1])
                {
                    f=1;
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }
        if(f)
        {
            cout<<max1-1<<endl;
        }
        else
        {
            cout<<max1<<endl;
        }
    }
    return 0;
}
