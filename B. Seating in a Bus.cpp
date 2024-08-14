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
       long long arr[n+10],i;
       for(i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       int mx=1e6;
       bool vis[mx];
       for(i=0;i<=n+2;i++)
       {
           vis[i]=0;
       }
       vis[arr[1]]=1;
       if(n==1)
       {
         cout<<"YES"<<endl;
       }
       else
       {
         long long f=0;
         for(i=2;i<=n;i++)
         {
             long long s=arr[i]+1;
             long long p=arr[i]-1;
             if(vis[s]==1 || vis[p]==1)
             {
                 vis[arr[i]]=1;
             }
             else
             {
                 f=1;
                 break;
             }
         }
         if(f==0)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }

       }


    }
    return 0;
}
 
