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
        long long arr[n+10],brr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>brr[i];
        }
        vector<pair<long long,long long>>v;
        while(1)
        {
        int f=0;
        for(int i=1;i<=n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                v.push_back({1,i});
                swap(arr[i],arr[i+1]);
                f=1;
            }
        }
        if(f==0)
        {
            break;
        }
        }
        while(1)
        {
        int f=0;
        for(int i=1;i<=n-1;i++)
        {
            if(brr[i]>brr[i+1])
            {
                v.push_back({2,i});
                swap(brr[i],brr[i+1]);
                f=1;
            }
        }
        if(f==0)
        {
            break;
        }
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>brr[i])
            {
                swap(arr[i],brr[i]);
                v.push_back({3,i});
            }
        }
        cout<<v.size()<<endl;
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }

    }
    return 0;
}
