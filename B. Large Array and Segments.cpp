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
        long long n,k,x;
        cin>>n>>k>>x;
        long long arr[n+10],sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        long long l=1,r=k,need=0;
        while(l<=r)
        {
            long long mid=(l+r)>>1;
            long long ok=mid*sum;
            if(ok>=x)
            {
                need=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(need==0)
        {
            cout<<0<<endl;
            continue;
        }
        long long sum1=(need-1)*sum;
        long long bad=(need-1)*n;
        for(int i=n;i>=1;i--)
        {
            sum1+=arr[i];
            if(sum1>=x)
            {
                break;
            }
            else
            {
                bad++;
            }
        }
        cout<<n*k-bad<<endl;


    }
    return 0;
}

 
