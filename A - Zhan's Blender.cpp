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
      long long x,y;
      cin>>x>>y;
      long long min1=min(x,y);
      long long ans=(n+min1-1)/min1;
      cout<<ans<<endl;
    }
    return 0;
}
