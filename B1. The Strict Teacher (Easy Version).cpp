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
       long long n,q,m;
       cin>>n>>q>>m;
       long long a,b;
       cin>>a>>b;
       long long x;
       cin>>x;
       vector<long long>v;
       v.push_back(a);
       v.push_back(b);
       sort(v.begin(),v.end());
       if(v[0]<x && v[1]<x)
       {
           cout<<abs(v[1]-n)<<endl;
       }
       else if(x<v[0] && x<v[1])
       {
           cout<<abs(v[0]-1)<<endl;
       }
       else
       {
           long long ok1=abs(x-v[0])-1;
           long long ok2=abs(x-v[1])-1;
           long long min1=min(ok1,ok2);
           long long max1=max(ok1,ok2);
           max1-=min1;
           cout<<min1+1+max1/2<<endl;
       }
    }
    return 0;
}

 
