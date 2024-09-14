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
       cin>>n>>m>>q;
       vector<long long>v;
       for(int i=1;i<=m;i++)
       {
           long long x;
           cin>>x;
           v.push_back(x);
       }
       sort(v.begin(),v.end());
       for(int i=1;i<=q;i++)
       {
        long long x;
        cin>>x;
       if(v[0]<x && v[m-1]<x)
       {
           cout<<abs(v[m-1]-n)<<endl;
       }
       else if(x<v[0] && x<v[m-1])
       {
           cout<<abs(v[0]-1)<<endl;
       }
       else
       {
            long long lo=lower_bound(v.begin(),v.end(),x)-v.begin();
            ///auto up=upper_bound(v.begin(),v.end(),x);
           /// cout<<v[lo-1]<<" "<<*up<<endl;
           long long ok1=abs(x-v[lo-1])-1;
           long long ok2=abs(x-v[lo])-1;
           long long min1=min(ok1,ok2);
           long long max1=max(ok1,ok2);
           max1-=min1;
           cout<<min1+1+max1/2<<endl;
           10;
       }

       }
    }
    return 0;
}
