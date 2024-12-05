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
         long long sum=0,two=0,three=0;
         for(int i=0;i<s.size();i++)
         {
             sum+=s[i]-'0';
             if(s[i]=='2')
             {
                 two++;
             }
             if(s[i]=='3')
             {
                 three++;
             }
         }
         if(sum%9==0)
         {
             cout<<"YES"<<endl;
         }
         else
         {
               long long ok=(sum+8)/9,f=0;
               long long lagbe=ok*9-sum;
               for(int i=0;i<=min(100*1LL,two);i++)
               {
                   for(int j=0;j<=min(100*1LL,three);j++)
                   {
                       long long mul=i*2+j*6;
                       if(mul%9==lagbe)
                       {
                           f=1;
                           break;
                       }
                   }
               }
               if(f)
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
 
