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
      if(k==1)
      {
          cout<<n<<endl;
          continue;
      }
      long long ans=0;
      while(n>0)
      {
          long long x=k,cnt1=0;
          if(x>n) break;
          while(x*k<=n)
          {
              x=x*k;
              cnt1++;
          }
          long long n1=n;
          long long cnt=n1/x;
          ans+=cnt;
          n=n-(cnt*x);
      }
      cout<<ans+n<<endl;
    }
    return 0;
}
