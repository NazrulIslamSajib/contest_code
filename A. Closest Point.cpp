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
       long long arr[n+10],i;
       for(i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       if(n==2)
       {
           long long diff=abs(arr[2]-arr[1]);
           if(diff>=2)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }

       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}
