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
      long long l,r;
      cin>>l>>r;
      if(l%2==0)
      {
          l++;
      }
      int ans=0;
      if(abs(l-r)>=2)
      {
         while(l+2<=r)
         {
             ans++;
             l+=4;
         }

      }
      cout<<ans<<endl;
    }
    return 0;
}
