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
       long long arr[n+10];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       if(k==1)
       {
           long long ans=0;
           for(int i=1;i<=n-1;i++)
           {
               ans=max(arr[i]+arr[n],ans);
           }
           for(int i=n;i>=2;i--)
           {
               ans=max(arr[i]+arr[1],ans);
           }
           cout<<ans<<endl;
           continue;
       }
       long long ans=0;
       for(int i=1;i<=n;i++)
       {
           vector<long long>v;
           for(int j=i+1;j<=n;j++)
           {
               v.push_back(arr[j]);
           }
           sort(v.begin(),v.end());
           reverse(v.begin(),v.end());
           long long k1=k,sum=arr[i];
           for(auto x:v)
           {
               if(k1>=1)
               {
                     sum+=x;
                     k1--;
               }
               else
               {
                   break;
               }
           }
           ans=max(sum,ans);
       }
       for(int i=n;i>=1;i--)
       {
           vector<long long>v;
           for(int j=i-1;j>=1;j--)
           {
               v.push_back(arr[j]);
           }
           sort(v.begin(),v.end());
           reverse(v.begin(),v.end());
           long long k1=k,sum=arr[i];
           for(auto x:v)
           {
               if(k1>=1)
               {
                     sum+=x;
                     k1--;
               }
               else
               {
                   break;
               }
           }
           ans=max(sum,ans);
       }
       cout<<ans<<endl;

    }
    return 0;
}

 
