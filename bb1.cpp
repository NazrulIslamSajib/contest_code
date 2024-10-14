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
       long long n,x;
       cin>>n>>x;
       long long arr[n+10];
       long long max1=0,sum=0;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           max1=max(arr[i],max1);
           sum+=arr[i];
       }
       long long l=max1,r=6e15,ans;
       while(l<=r)
       {
           long long mid=(l+r)>>1;
           long long total=mid*x;
           if(total>=sum)
           {
               ans=mid;
               r=mid-1;
           }
           else
           {
               l=mid+1;
           }
       }
       cout<<ans<<endl;


    }
    return 0;
}
