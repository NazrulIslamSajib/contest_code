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
       long long arr[n+10];
       map<long long,long long>mp;
       vector<long long>v;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           if(mp[arr[i]]==0)
           {
             v.push_back(arr[i]);
             mp[arr[i]]++;
           }


       }
       for(auto x:v)
       {
           cout<<x<<" ";
       }
       for(int i=1;i<=n;i++)
       {
           if(mp[i]==0)
           {
               cout<<i<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
 
