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
        long long arr[n+10];
        long long brr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long max1=arr[1];
        for(int i=1;i<=n;i++)
        {
            brr[i]=max(arr[i],max1);
            max1=brr[i];
        }
        long long sum=0,cursum=0;
        brr[0]=0;
        for(int i=n;i>=1;i--)
        {
              long long now=max(brr[i-1],arr[i]);
              cout<<now+sum<<" ";
              sum+=arr[i];
        }
        cout<<endl;
    }
    return 0;
}
