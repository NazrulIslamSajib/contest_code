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
       long long n,x,y;
       cin>>n>>x>>y;
       long long arr[n+10],msum=0;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           msum+=arr[i];
       }
       sort(arr+1,arr+n+1);
       long long sum=0;
       for(int i=1;i<=n;i++)
       {
           long long l=i+1,r=n,left=-1;
           while(l<=r)
           {
               long long mid=(l+r)>>1;
               long long ok=msum-(arr[i]+arr[mid]);
               ///cout<<i<<" "<<mid<<" "<<ok<<endl;
               if(ok>=x && ok<=y)
               {
                   left=mid;
                   r=mid-1;
               }
               else if(ok<x)
               {
                   r=mid-1;
               }
               else
               {
                   l=mid+1;
               }
           }
           ///cout<<left<<endl;
           l=i+1,r=n;
           long long right=-1;
           while(l<=r)
           {
               long long mid=(l+r)>>1;
               long long ok=msum-(arr[i]+arr[mid]);
               ////cout<<i<<" "<<ok<<endl;
               if(x<=ok && ok<=y)
               {
                   right=mid;
                   l=mid+1;
               }
               else if(ok<x)
               {
                   r=mid-1;
               }
               else
               {
                   l=mid+1;
               }
           }
           //cout<<i<<" "<<left<<" "<<right<<endl;
           if(left!=-1 && right!=-1)
           {
               sum+=(right-left+1);
           }
       }
       cout<<sum<<endl;
    }
    return 0;
}
