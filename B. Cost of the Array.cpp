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
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       if(n==k)
       {
           long long x=1,f=0;
           for(int i=2;i<=n;i+=2)
           {
               if(arr[i]!=x)
               {
                   f=1;
                   cout<<x<<endl;
                   break;
               }
               x++;
           }
           if(f==0)
           {
               cout<<k/2+1<<endl;
           }
           continue;
       }
       long long need=(n-k);
       need+=2;
       int f=0;
       for(int i=2;i<=need;i++)
       {
           if(arr[i]!=1)
           {
               f=1;
               break;
           }
       }
       if(f)
       {
           cout<<"1"<<endl;
       }
       else
       {
           cout<<2<<endl;
       }
    }
    return 0;
}
