#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
       long long n,i;
       cin>>n;
       vector<pair<long long,long long>>v;
       for(i=1;i<=n;i++)
       {
           long long x,y;
           cin>>x>>y;
           v.push_back({x,y});
       }
       long long s1,s2,d1,d2;
       cin>>s1>>s2>>d1>>d2;
       long long ans=0;
       long long d=((s1-d1)*1LL*(s1-d1)*1LL+(s2-d2)*(s2-d2)*1LL);
       for(auto x:v)
       {
           long long f=x.first,s=x.second;
           long long h=((f-d1)*(f-d1)*1LL+(s-d2)*(s-d2)*1LL);
           //cout<<d<<" "<<h<<endl;
           if(h<=d)
           {
              ans=1;
              break;
           }
       }
       if(ans==0)
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
 
