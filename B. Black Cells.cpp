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
       if(n%2)
       {
           long long finalans=1e18;
           for(int i=1;i<=n;i++)
           {
               if(i%2==1)
               {
                   long long lagbena=i,max1=1;
                   for(int j=1;j<=n;j+=2)
                   {
                       if(lagbena!=j)
                       {
                           max1=max(max1,arr[j+1]-arr[j]);
                       }
                       if(lagbena==j)
                       {
                           j--;
                       }
                   }
                  /// cout<<max1<<endl;
                   finalans=min(finalans,max1);
               }


           }
           cout<<finalans<<endl;
       }
       else
       {
           long long finalans=1;
           for(int i=1;i<=n;i+=2)
           {
               finalans=max(finalans,arr[i+1]-arr[i]);
           }
            cout<<finalans<<endl;
       }

    }
    return 0;
}
 
