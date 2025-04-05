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
         long long arr[n+10];
         for(int i=1;i<=n;i++)
         {
             cin>>arr[i];
         }
         sort(arr+1,arr+n+1);
         if(arr[1]==arr[2])
         {
             cout<<"YES"<<endl;
             continue;
         }
         if(arr[1]==1)
         {
             long long g=0;
             for(int i=2;i<=n;i++)
             {
                 g=__gcd(arr[i],g);
             }
             if(g==1)
             {
                 cout<<"YES"<<endl;
             }
             else
             {
                 cout<<"NO"<<endl;
             }
             continue;
         }
         vector<long long>v;
         for(int i=2;i<=n;i++)
         {
             if(arr[i]%arr[1]==0)
             {
                 v.push_back(arr[i]);
             }
         }
         sort(v.begin(),v.end());
         if(v.size()<2)
         {
             cout<<"NO"<<endl;
             continue;
         }
         long long g=0;
         for(int i=0;i<v.size();i++)
         {
             g=__gcd(g,v[i]);
         }
         if(g!=arr[1])
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
    }
    return 0;
}
