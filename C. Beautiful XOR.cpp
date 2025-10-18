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
         long long a,b;
         cin>>a>>b;
         if(a==b)
         {
             cout<<0<<endl;
             continue;
         }
         long long ha=0,hb=0;
         for(long long i=50;i>=0;i--)
         {
               if((1LL<<i)&a)
               {
                   ha=i;
                   break;
               }
         }
         for(long long i=50;i>=0;i--)
         {
               if((1LL<<i)&b)
               {
                   hb=i;
                   break;
               }
         }
         vector<long long>v;
         if(hb>ha)
         {
             cout<<-1<<endl;
             continue;
         }
         else
         {

              ///cout<<ha<<" "<<hb<<" "<<a<<" "<<b<<endl;
              for(long long i=0;i<=max(hb,ha);i++)
              {
                   if((1LL<<i)&b)
                   {
                        if((1LL<<i)&a)
                        {

                        }
                        else
                        {
                            long long ok=1LL<<i;
                            v.push_back(ok);
                        }
                   }
                   else if((1LL<<i)&a)
                   {
                        if((1LL<<i)&b)
                        {

                        }
                        else
                        {
                            long long ok=1LL<<i;
                            v.push_back(ok);
                        }
                   }
              }
         }
         cout<<v.size()<<endl;
         for(auto x:v)
         {
             cout<<x<<" ";
         }
         cout<<endl;



    }
    return 0;
}

 
