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
          long long l=1,r=n,low=1;
          while(l<=r)
          {
               long long mid=(l+r)>>1;
               cout<<1<<" "<<1<<" "<<mid<<endl;
               long long x;
               cin>>x;
               cout<<2<<" "<<1<<" "<<mid<<endl;
               long long y;
               cin>>y;
               if(x==y)
               {
                    l=mid+1;
               }
               else
               {
                   low=mid;
                   r=mid-1;
               }
          }
          cout<<"1 "<<low<<" "<<n<<endl;
          long long x;
          cin>>x;
          cout<<"2 "<<low<<" "<<n<<endl;
          long long y;
          cin>>y;
          long long diff=y-x;
          cout<<"! "<<low<<" "<<low+diff-1<<endl;

    }
    return 0;
}
