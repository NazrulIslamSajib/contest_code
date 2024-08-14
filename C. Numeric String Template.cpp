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
       map<long long,vector<long long>>mp1;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
           mp1[arr[i]].push_back(i);
       }
       long long m;
       cin>>m;
       while(m--)
       {
           string s;
           cin>>s;
           int sz=s.size();
           if(sz!=n)
           {
               cout<<"NO"<<endl;
               continue;
           }
           map<char,vector<long long>>mp2;
           map<char,int>vis;
           vector<long long>index;
           for(char ch='a';ch<='z';ch++)
           {
               vis[ch]=0;
           }
           for(i=0;i<sz;i++)
           {
               if(vis[s[i]]==0)
               {
                  index.push_back(i);
                  vis[s[i]]=1;
               }
           }
           for(i=0;i<sz;i++)
           {
               mp2[s[i]].push_back(i);
           }
           int f=0;
           for(auto x:index)
           {
               long long value=arr[x];
               char valuech=s[x];
               if(mp1[value]!=mp2[valuech])
               {
                   f=1;
                   break;
               }
           }
           if(f==1)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
           }
       }
    }
    return 0;
}
 
