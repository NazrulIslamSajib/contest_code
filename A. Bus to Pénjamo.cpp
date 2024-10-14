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
        long long n,r;
        cin>>n>>r;
        long long arr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long ans=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            long long baki=arr[i]%2;
            ans+=(arr[i]/2)*2;
            sum+=baki;
            r=r-(arr[i]/2);
        }
        if(sum<r)
        {
            ans+=sum;
        }
        else
        {
            ans+=(r*2-sum);
        }
        cout<<ans<<endl;

    }
    return 0;
}
