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
        long long arr[n+10],sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr+1,arr+n+1);
        set<long long>st1,st2;
        st1.insert(arr[1]-1);
        for(int i=2;i<=n;i++)
        {
            st1.insert(arr[i]);
        }
        st2.insert(arr[n]-1);
        for(int i=1;i<n;i++)
        {
            st2.insert(arr[i]);
        }
        long long first=*st1.rbegin()-*st1.begin();
        long long second=*st2.rbegin()-*st2.begin();
        ///cout<<first<<" "<<second<<endl;
        if(first<=k || second<=k)
        {
            if(sum%2)
            {
                cout<<"Tom"<<endl;
            }
            else
            {
                cout<<"Jerry"<<endl;
            }
        }
        else
        {
            cout<<"Jerry"<<endl;
        }
    }
    return 0;
}
