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
         long long arr[n+10];
         map<long long,long long>mp;
         for(int i=1;i<=n;i++)
         {
             cin>>arr[i];
             mp[arr[i]]++;
         }
         sort(arr+1,arr+n+1);
         long long ans=1;
         for(long long i=1;i<=n;i++)
         {
                long long g=mp[i]+mp[2*i]+mp[3*i];
                long long l=1,r=n,index=-1;
                while(l<=r)
                {
                     long long mid=(l+r)>>1;
                     if(4*i<=arr[mid])
                     {
                         index=mid;
                         r=mid-1;
                     }
                     else
                     {
                         l=mid+1;
                     }
                }
                if(index!=-1)
                {
                      g+=(n-index+1);
                      ///cout<<i<<" "<<g<<endl;
                }
                long long baki=n-g;
                if(baki<=k)
                {
                    ans=max(i,ans);
                }
         }
         cout<<ans<<endl;


    }
    return 0;
}
