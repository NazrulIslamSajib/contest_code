#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n,q;
        cin>>n>>q;
        long long arr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        map<long long,long long>mp;
        mp[n-1]++;
        for(int i=2;i<=n;i++)
        {
            long long index=(i-1)*(n-i+1);
            long long curindex=(i-1)*(n-i+1)+(n-i);
            mp[index]+=arr[i]-arr[i-1]-1;
            mp[curindex]+=1;

        }
        while(q--)
        {
            long long x;
            cin>>x;
            cout<<mp[x]<<" ";
        }
        cout<<endl;






    }
    return 0;
}
