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
       long long n,k;
       cin>>n>>k;
       map<long long,long long>mp;
       long long arr[n+10];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           mp[arr[i]]++;
       }
       vector<long long>v;
       long long fifo=0;
       for(auto x:mp)
       {
           v.push_back(x.first);
           fifo=max(fifo,x.second);

       }
       if(k==1)
       {
           cout<<fifo<<endl;
           continue;
       }
       long long max1=0;
       for(int i=0;i<v.size();i++)
       {
           long long cur=mp[v[i]],cnt=k-1,f=i,pore=0,biyog=0;
           ///cout<<v[i]<<" ";
           while(i+1<v.size() &&  v[i]+1==v[i+1])
           {
              ///cout<<v[i+1]<<" ";
              cnt--;
              if(cnt<=0)
              {
                  cur+=mp[v[i+1]];
                  long long have=cur-biyog;
                 //// cout<<have<<endl;
                  max1=max(have,max1);
                  biyog+=mp[v[f]];
                  f++;
                  pore=1;
              }
              else
              {
                  cur+=mp[v[i+1]];
              }
              i++;
           }
           if(pore==0)
           max1=max(cur,max1);
           ///cout<<endl;
       }
       cout<<max1<<endl;
    }
    return 0;
}
