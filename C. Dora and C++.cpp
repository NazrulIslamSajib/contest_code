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
       long long n,a,b;
       cin>>n>>a>>b;
       long long g=__gcd(a,b);
       long long arr[n+10],i;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           arr[i]=arr[i]%g;
       }
       sort(arr+1,arr+n+1);
       long long min1=arr[n]-arr[1];
       for(int i=1;i<=n-1;i++)
       {
           long long ok=arr[i]+g-arr[i+1];
           min1=min(ok,min1);
       }
       cout<<min1<<endl;

    }
    return 0;
}
