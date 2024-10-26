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
        long long min1=INT_MAX;
        for(int i=1;i<=n;i++)
        {
           long long cnt=0;
           for(int j=i+1;j<=n;j++)
           {
               if(arr[i]<arr[j])
               {
                   cnt++;
               }
           }
           min1=min(i-1+cnt,min1);
        }
        cout<<min1<<endl;
    }
    return 0;
}
 
