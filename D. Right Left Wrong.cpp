#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
      long long n;
      cin>>n;
      long long arr[n+10],i;
      for(i=1;i<=n;i++)
      {
          cin>>arr[i];
      }
      string s;
      cin>>s;
      arr[0]=0;
      for(i=1;i<=n;i++)
      {
         arr[i]=arr[i]+arr[i-1];
      }
      int last=n;
      long long ans=0,j;
      for(i=0;i<n;i++)
      {
          if(s[i]=='L')
          {
              int f=0;
              for(j=last-1;j>i;j--)
              {
                  if(s[j]=='R')
                  {
                     /// cout<<"s"<<endl;
                      last=j;
                     // cout<<last<<endl;
                     f=1;
                      break;
                  }
              }
              if(f==1)
              {

                  ans+=arr[last+1]-arr[i];
              }
          }
      }
      cout<<ans<<endl;
    }
    return 0;
}
 
