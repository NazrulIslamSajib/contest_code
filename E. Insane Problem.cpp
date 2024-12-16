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
        long long k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        long long ans=1,sum=0;
        for(int i=1;i<=32;i++)
        {
            long long l=l1,r=r1,left=0;
            while(l<=r)
            {
                long long mid=(l+r)>>1;
                long long tmp=ans*mid;
                if(tmp>=l2)
                {
                  left=mid;
                  r=mid-1;
                }
                else
                {
                   l=mid+1;
                }
            }
            l=l1,r=r1;
            long long right=0;
            while(l<=r)
            {
                long long mid=(l+r)>>1;
                long long tmp=ans*mid;
                if(tmp<=r2)
                {
                    right=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            if(left!=0 && right!=0)
            {
                sum+=(right-left+1);
            }
            if(ans*k*1LL>r2)
            {
                break;
            }
            ans=ans*k*1LL;
        }
        cout<<sum<<endl;
    }
    return 0;
}
