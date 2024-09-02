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
       string s;
       cin>>s;
       map<long long,long long>mp;
       for(i=0;i<n;i++)
       {
           long long x1=i+1,ans=0;
           if(s[i]=='0')
           {
               ans++;
           }
           if(mp[i+1]!=0)
           {
               cout<<mp[i+1]<<" ";
               continue;
           }
           int x2=i+1;
           vector<long long>v;
           v.push_back(x2);
           while(x2!=arr[x1])
           {
               x1=arr[x1];
               v.push_back(x1);
               if(s[x1-1]=='0')
               {
                   ans++;
               }
           }
           for(auto x:v)
           {
               mp[x]=ans;
           }
           cout<<ans<<" ";
       }
       cout<<endl;

    }
    return 0;
}
