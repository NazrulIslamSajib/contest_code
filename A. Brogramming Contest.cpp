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
       string s;
       cin>>s;
       long long ans=0,index=-1;
       for(int i=n-1;i>=0;i--)
       {
           if(s[i]=='0')
           {
               index=i;
               break;
           }
           else
           {
               ans=1;
           }
       }
       for(int i=index;i>=0;i--)
       {
           int f1=0,f2=0;
           while(s[i]=='0' && i>=0)
           {
               f1=1;
               i--;
           }
           while(s[i]=='1' && i>=0)
           {
               f2=1;
               i--;
           }
           if(f1==1 && f2==1)
           {
               ans+=2;
               i++;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}
