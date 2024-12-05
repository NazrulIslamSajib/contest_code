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
       string s;
       cin>>s;
       long long sz=s.size();
       long long max1=sz-1;
       for(int i=0;i<=max1;i++)
       {
           long long index=1,have=s[i]-'0',cor,f=0;
           char next;
           long long sz1=i+10;
           for(int j=i+1;j<=min(sz1,max1);j++)
           {
               long long now=s[j]-'0';
               now-=index;
               index++;
               if(have<now)
               {
                    have=now;
                    next=s[j];
                    cor=j;
                    f=1;
               }
           }
           if(f==1)
           {
               for(int j=cor;j>=i+1;j--)
               {
                   s[j]=s[j-1];
               }
                s[i]='0'+have;
           }
       }
       cout<<s<<endl;
    }
    return 0;
}
 
