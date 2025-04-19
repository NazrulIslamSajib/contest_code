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
        long long n,k;
        cin>>n>>k;
        long long arr[n+10],brr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>brr[i];
        }
        map<int,int>vis1,vis2;
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>=brr[i])
            {
                vis1[i]=1;
                ans+=arr[i];
            }
            else
            {
                vis2[i]=1;
                ans+=brr[i];
            }
        }
        vector<long long>v;
        for(int i=1;i<=n;i++)
        {
            if(vis1[i]==0)
            {
                v.push_back(arr[i]);
            }
            else
            {
                v.push_back(brr[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<k-1;i++)
        {
            ans+=v[i];
        }
        ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}


 
