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
       long long arr[n+10],brr[n+10],max1=0,min1=INT_MAX;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           max1=max(max1,arr[i]);
           min1=min(min1,arr[i]);
       }
       long long cnt=0;
       for(int i=1;i<=n;i++)
       {
           cin>>brr[i];
           if(brr[i]<0)
           {
               cnt++;
           }
       }
       if(cnt==n)
       {
            long long l=0,r=k,ans=0;
            while(l<=r)
            {
                long long mid=(l+r)>>1;
                long long holo=max1+mid;
                long long need=(holo-min1);
                if(need<=k)
                {
                    ans=mid+1;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            cout<<ans<<endl;
       }
       else
       {
           set<long long>st;
           long long need=0,f=0;
           for(int i=1;i<=n;i++)
           {
               if(brr[i]>=0)
               {
                   need=arr[i]+brr[i];
                   break;
               }
           }
           for(int i=1;i<=n;i++)
           {
               if(brr[i]>=0)
               {
                   st.insert(arr[i]+brr[i]);
               }
               else
               {
                   if(arr[i]>need)
                   {
                       f=1;
                       break;
                   }
                   if(arr[i]+k<need)
                   {
                       f=1;
                       break;
                   }
               }
           }
           if(st.size()==1 && f==0)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<0<<endl;
           }
       }
    }
    return 0;
}
