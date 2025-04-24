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
       long long n,m;
       cin>>n>>m;
       long long arr[n+10],brr[m+10];
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
       for(int i=1;i<=m;i++)
       {
           cin>>brr[i];
       }
       long long pre[n+10],suf[n+10],x=1;
       pre[0]=0;
       for(int i=1;i<=n;i++)
       {
            if(arr[i]>=brr[x] && x<=m)
            {
                pre[i]=pre[i-1]+1;
                x++;
            }
            else
            {
                pre[i]=pre[i-1];
            }
       }
       x=m;
       suf[n+1]=0;
       for(int i=n;i>=1;i--)
       {
            if(arr[i]>=brr[x] && x>=1)
            {
                  suf[i]=suf[i+1]+1;
                  x--;
            }
            else
            {
                suf[i]=suf[i+1];
            }
       }
       if(suf[1]>=m || pre[n]>=m)
       {
           cout<<0<<endl;
           continue;
       }
       long long max1=INT_MAX;
       for(int i=0;i<=n;i++)
       {
           long long index1=pre[i];
           long long index2=suf[i+1];
           if(index1+index2>=m)
           {
               max1=0;
           }
           if(pre[i]+1+suf[i+1]>=m)
           {
               max1=min(max1,brr[index1+1]);
           }

       }
       if(max1==INT_MAX)
       {
           cout<<-1<<endl;
       }
       else
       cout<<max1<<endl;
    }
    return 0;
}
