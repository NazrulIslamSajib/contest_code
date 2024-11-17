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
         sort(arr+1,arr+n+1);
         long long f=0;
         for(int i=1;i<=n;i++)
         {
             long long l=i+1,r=n,mul=arr[i];
             while(l<=r)
             {
                 long long mid=(l+r)>>1;
                 long long ok=mul*arr[mid];
                 if(ok==(n-2))
                 {
                     f=1;
                     cout<<arr[i]<<" "<<arr[mid]<<endl;
                     break;
                 }
                 else if(ok<(n-2))
                 {
                     l=mid+1;
                 }
                 else
                 {
                     r=mid-1;
                 }

             }
             if(f)
             {
                 break;
             }
         }
    }
    return 0;
}
 
