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
      string s,t;
      cin>>s>>t;
      long long ans=s.size()+t.size(),max1;
      max1=ans;
      long long l=0,r=0,cnt=0;
      while(l<s.size() && r<t.size() && s[l]==t[r])
      {
          ans-=1;
          l++;
          r++;
      }
      cout<<min(ans+1,max1)<<endl;
    }
    return 0;
}
 
