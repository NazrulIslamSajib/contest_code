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
        long long arr[n+10];
        long long l=0,r=n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long ans=-1;
        while(l<=r)
        {
            long long mid=(l+r)>>1;
            long long cnt=0;
            set<int>st,cmp;
            for(int i=0;i<=mid;i++)
            {
                cmp.insert(i);
            }
            for(int i=1;i<=n;i++)
            {
                if(arr[i]<=mid)
                {
                   st.insert(arr[i]);
                }
                if(st.size()==cmp.size())
                {
                    cnt++;
                    st.clear();
                }
            }
            if(cnt>=k)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
