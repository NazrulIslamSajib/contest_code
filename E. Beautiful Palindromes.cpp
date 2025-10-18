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
       long long arr[2*n+10];
       map<long long,long long>mp;
       for(int i=1;i<=n;i++)
       {
            cin>>arr[i];
            mp[arr[i]]++;
       }
       int f=0,get=1;
       for(int i=1;i<=n;i++)
       {
           if(mp[i]==0)
           {
               f=1;
               get=i;
               break;
           }
       }
       if(f==0)
       {
           for(int i=1;i<=k;i++)
           {
               cout<<arr[i]<<" ";
           }
           cout<<endl;
           continue;
       }
       vector<long long>v;
       v.push_back(get);
       arr[n+1]=get;
       for(int i=n+2;i<=n+k;i++)
       {
              for(int j=1;j<=n;j++)
              {
                    if(arr[i-1]!=j && arr[i-2]!=j)
                    {
                        arr[i]=j;
                        v.push_back(j);
                        break;
                    }
              }
       }
       for(auto x:v)
       {
           cout<<x<<" ";
       }
       cout<<endl;

    }
    return 0;
}
