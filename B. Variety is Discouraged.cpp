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
       long long arr[n+10];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       map<long long,long long>mp;
       for(int i=1;i<=n;i++)
       {
           mp[arr[i]]++;
       }
       long long get=0,max1=0,ans1=0,ans2=0,first=0,second=0;
       for(int i=1;i<=n;i++)
       {
           int f=0;
           while(mp[arr[i]]==1)
           {
               get=1;
               if(f==0)
               {
                   first=i;
                   f=1;
               }
               if(f==1)
               {
                   second=i;
                   if((second-first+1)>=max1)
                   {
                       max1=second-first+1;
                       ans1=first;
                       ans2=second;
                   }
               }
               i++;
           }
           if(f)
           {
               i--;
           }
       }
       if(get==1)
       {
           cout<<ans1<<" "<<ans2<<endl;
       }
       else
       {
           cout<<0<<endl;
       }
    }
    return 0;
}
