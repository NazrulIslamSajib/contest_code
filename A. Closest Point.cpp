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
      long long n,k,i;
      cin>>n>>k;
      vector<long long>v;
      for(i=1;i<=n;i++)
      {
          long long x;
          cin>>x;
          v.push_back(x);
      }
      sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
      for(i=0;i<n;i++)
      {
          if(i%2==1)
          {
              long long sum=abs(v[i]-v[i-1]);
              if(sum<=k)
              {
                  v[i]=v[i]+sum;
                  k=k-sum;
              }
              else
              {
                  v[i]=v[i]+k;
                  k=0;
              }
              if(k==0)
              {
                  break;
              }
          }
      }
      long long A=0,B=0;
      for(i=0;i<n;i++)
      {
          if(i%2==0)
          {
              A+=v[i];
          }
          else
          {
              B+=v[i];
          }
      }
      cout<<A-B<<endl;

    }
    return 0;
}
