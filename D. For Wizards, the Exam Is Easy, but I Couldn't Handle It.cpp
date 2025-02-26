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
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long max1=0;
        for(int i=1;i<=n;i++)
        {
            long long cnt=0;
            for(int j=i+1;j<=n;j++)
            {
                if(arr[i]>arr[j])
                {
                    cnt++;
                }
                if(arr[i]<arr[j])
                {
                    cnt--;
                }
                max1=max(cnt,max1);
            }

        }
        if(max1==0)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        long long index1=1,index2=1;
        for(int i=1;i<=n;i++)
        {
            long long cnt=0,f=0;
            for(int j=i+1;j<=n;j++)
            {
                if(arr[i]>arr[j])
                {
                    cnt++;
                }
                if(arr[i]<arr[j])
                {
                    cnt--;
                }
                if(cnt==max1)
                {
                    f=1;
                    index1=i;
                    index2=j;
                    break;
                }
             }
             if(f)
             {
                 break;
             }
        }
        cout<<index1<<" "<<index2<<endl;

    }
    return 0;
}
