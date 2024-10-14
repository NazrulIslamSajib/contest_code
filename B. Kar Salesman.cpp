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
       long long arr[n+10],sum=0;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
       }
       sort(arr+1,arr+n+1);
       long long ok=(sum+x-1)/x;
       cout<<max(ok,arr[n])<<endl;
    }
    return 0;
}
