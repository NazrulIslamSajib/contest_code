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
         long long n,a,b,c;
         cin>>n>>a>>b>>c;
         long long mul;
         long long ans=(n+a+b+c-1)/(a+b+c);
         mul=ans*(a+b+c);
         long long day=ans*3;
         if(mul-c>=n)
         {
             mul-=c;
             day--;
             if(mul-b>=n)
             {
               mul-=b;
               day--;
             }
         }
         cout<<day<<endl;
    }
    return 0;
}
