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
       long long n,m,p,q;
       cin>>n>>m>>p>>q;
       long long arr[n+10],sum=0;
       for(int i=1;i<=n;i++)
       {
           if(i%p==0)
           {
               arr[i]=q;
           }
           else
           {
               arr[i]=0;
           }
           sum+=arr[i];
       }
       if(sum==m || arr[n]==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
            cout<<"NO"<<endl;
       }

    }
    return 0;
}
