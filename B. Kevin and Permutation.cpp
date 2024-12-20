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
       long long x=0;
       long long y=1;
       for(int i=1;i<=n;i++)
       {
           arr[i]=0;
       }
       while(x+k<=n)
       {
           x+=k;
           arr[x]=y;
           y++;
       }
       for(int i=1;i<=n;i++)
       {
           if(arr[i]==0)
           {
               arr[i]=y;
               y++;
           }
       }
       for(int i=1;i<=n;i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;

    }
    return 0;
}
