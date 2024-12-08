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
       if(n==1)
       {
           cout<<1<<endl;
       }
       else if(n==2)
       {
           cout<<2<<endl;
       }
       else if(n==3)
       {
           cout<<2<<endl;
       }
       else if(n==4)
       {
           cout<<2<<endl;
       }
       else
       {
           long long sum=4,ans=2;
           while(sum<n)
           {
                ans++;
                sum++;
                sum*=2;
           }
           cout<<ans<<endl;
       }
    }
    return 0;
}
