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
      long long arr[n+10],sum=0;
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
      }
      if(sum%n==0)
      {
          long long need=sum/n,f=0;
          for(int i=2;i<=n-1;i++)
          {
              if(arr[i-1]!=need)
              {
                  if(arr[i-1]<need)
                  {
                      long long next=need-arr[i-1];
                      arr[i-1]=need;
                      arr[i+1]-=next;
                  }
                  else
                  {
                      long long next=arr[i-1]-need;
                      arr[i-1]=need;
                      arr[i+1]+=next;
                  }

              }
          }
          for(int i=1;i<=n;i++)
          {
              if(arr[i]!=need)
              {
                  f=1;
                  break;
              }
          }
          if(f)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              cout<<"YES"<<endl;
          }

      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
    return 0;
}
 
