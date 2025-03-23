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
      long long x,y,a;
      cin>>x>>y>>a;
      a++;
      int l=0,r=1e9,f,s;
      while(l<=r)
      {
          int mid=(l+r)>>1;
          long long first=mid+1,second=mid;
          long long ok=first*x+second*y;
          if(ok>=a)
          {
            f=mid+1;
            s=mid;
             r=mid-1;
          }
          else
          {
              l=mid+1;
          }
      }
      f--;
      long long ok=(f*x)+(s*y);
      if(ok>=a)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
    return 0;
}
