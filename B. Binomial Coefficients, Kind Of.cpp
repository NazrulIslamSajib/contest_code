#include<bits/stdc++.h>
using namespace std;
long long call(long long a,long long x,long long mod)
{
           long long res=1,base=a,power=x;
           while(power!=0)
           {
               if(power%2==1)
               {
                   power--;
                   res=((base%mod)*(res%mod))%mod;
               }
               else
               {
                   power=power/2;
                   base=((base%mod)*(base%mod))%mod;
               }
           }
           return res%mod;
}
int main()
{
    long long tt=1;
    ///cin>>tt;
    while(tt--)
    {

           long long n;
           cin>>n;
           vector<long long>v1,v2;
           for(int i=1;i<=n;i++)
           {
               long long x;
               cin>>x;
               v1.push_back(x);
           }
           for(int i=1;i<=n;i++)
           {
               long long x;
               cin>>x;
               v2.push_back(x);
           }
           long long mod=1e9+7;
           for(int i=0;i<n;i++)
           {
               cout<<call(2,v2[i],mod)%mod<<endl;
           }
    }
    return 0;
}
