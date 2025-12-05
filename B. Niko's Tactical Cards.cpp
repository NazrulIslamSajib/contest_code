#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long tt=1;
    cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;
        long long arr[n+2],brr[n+2];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>brr[i];
        }
        long long min1=0,max1=0;
        for(int i=1;i<=n;i++)
        {
             long long ok1=min1-arr[i],ok2=max1-arr[i];
             long long ok3=brr[i]-min1,ok4=brr[i]-max1;
             vector<long long>v;
             v.push_back(ok1);
             v.push_back(ok2);
             v.push_back(ok3);
             v.push_back(ok4);
             sort(v.begin(),v.end());
             min1=v[0];
             max1=v[3];
        }
        cout<<max(min1,max1)<<endl;
    }
    return 0;
}
