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
       if(n%2==1 && k%2==1)
       {
           n-=k;
           k--;
           long long ans=(n+k-1)/k;
           ans++;
           cout<<ans<<endl;
       }
       else
       {
           k--;
           cout<<(n+k-1)/k<<endl;
       }
    }
    return 0;
}

 
