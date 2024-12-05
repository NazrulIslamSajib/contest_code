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
       long long n,m,ans=0,f=0,cnt=0;
       cin>>n>>m;
       for(int i=1;i<=n;i++)
       {
           string s;
           cin>>s;
           if(f==0 && s.size()+ans<=m)
           {
               ans+=s.size();
               cnt++;
           }
           else
           {
               f=1;
           }
       }
       cout<<cnt<<endl;
    }
    return 0;
}
 
