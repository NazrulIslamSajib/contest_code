#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;
        long long arr[n+10],arr1[n+10];
        map<int,bool>vis;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>arr1[i];
        }
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            int p=arr[arr1[i]];
            if(vis[p]==true)
            {
                cout<<ans<<" ";
            }
            else
            {

                while(vis[p]==false)
                {
                     ans++;
                     vis[p]=true;
                     p=arr[p];
                }
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

 
