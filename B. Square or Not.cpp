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
       long long sq=sqrt(n);
       long long valid=sq*sq;
       if(valid!=n)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           vector<long long>v,one;
           long long f=0;
           for(int i=0;i<sq;i++)
           {   one.push_back(1);
               if(i==0 || i==(sq-1))
               {
                 v.push_back(1);
               }
               else
               {
                   v.push_back(0);
               }

           }
           long long cnt=0,i,j;
           for(i=0;i<n;i++)
           {
               vector<long long>tmp;
               cnt++;
               for(j=i;j<i+sq;j++)
               {
                   tmp.push_back(s[j]-'0');
               }
               if(cnt==1 || cnt==sq)
               {
                   if(one!=tmp)
                   {
                       f=1;
                       break;
                   }
               }
               else
               {
                   if(v!=tmp)
                   {
                       f=1;
                       break;
                   }
               }
               i+=(sq-1);
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
