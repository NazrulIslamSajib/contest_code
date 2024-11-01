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
      if(n==1)
      {
          cout<<1<<endl;
          cout<<1<<endl;
      }
      else if(n!=k && k%2==0)
      {
         cout<<3<<endl;
         cout<<1<<" "<<k<<" "<<k+1<<endl;
      }
      else if(n!=k && k%2==1)
      {
          if(k-1>1 && k+1<n)
          {
              cout<<3<<endl;
              cout<<1<<" "<<k-1<<" "<<k+2<<endl;
          }
          else
          {
              cout<<-1<<endl;
          }
      }
      else
      {
          cout<<-1<<endl;
      }
    }
    return 0;
}
 
