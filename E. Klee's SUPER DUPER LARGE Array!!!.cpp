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
       long long l=k,r=n+k-1;
       long long presum=(l-1)*l/2;
       long long totalsum=r*(r+1)/2;
       long long midsum=totalsum-presum;
       long long half=midsum/2,num,sum;
       while(l<=r)
       {
           long long mid=(l+r)>>1;
           long long cursum=mid*(mid+1)/2;
           long long nowhave=cursum-presum;
           if(nowhave<=half)
           {
               num=mid;
               sum=nowhave;
               l=mid+1;
           }
           else
           {
               r=mid-1;
           }
       }
       long long ans1=midsum-sum;
       long long tmp=ans1;
       ans1=abs(ans1-sum);
       num++;
       long long ans2=abs(sum+num-tmp+num);
       cout<<min(ans1,ans2)<<endl;

    }
    return 0;
}
