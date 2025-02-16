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
       long long pre1[n+10],pre2[n+10];
       pre1[0]=0;
       pre2[n+1]=0;
       for(int i=1;i<=n;i++)
       {
            if(arr[i]>=1)
            {
                pre1[i]=pre1[i-1]+arr[i];
            }
            else
            {
                pre1[i]=pre1[i-1];
            }
       }
       for(int i=n;i>=1;i--)
       {
            if(arr[i]<0)
            {
                pre2[i]=pre2[i+1]+abs(arr[i]);
            }
            else
            {
                pre2[i]=pre2[i+1];
            }
       }
       long long pos=0,neg=0,max1=0,max2=0;
       for(int i=1;i<=n;i++)
       {
          long long sum=0;
          if(arr[i]>=1)
          {
              pos+=arr[i];
          }
          if(arr[i]<0)
          {
              sum=pre2[i];
          }
          max1=max(sum+pos,max1);
        }
       for(int i=n;i>=1;i--)
       {
          long long sum=0;
          if(arr[i]<0)
          {
              neg+=abs(arr[i]);
          }
          if(arr[i]>0)
          {
             sum=pre1[i];
          }
          max2=max(max2,sum+neg);
       }
       cout<<max(max1,max2)<<endl;
    }
    return 0;
}
