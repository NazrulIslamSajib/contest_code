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
       long long arr[n+10],value;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           arr[i]=abs(arr[i]);
           if(i==1)
           {
               value=arr[i];
           }
       }
       sort(arr+1,arr+n+1);
       int f=0;
       for(int i=1;i<=(n+1)/2;i++)
       {
           if(arr[i]==value)
           {
               f=1;
               break;
           }
       }
       if(f==1 || (n%2==0 && arr[n/2+1]==value))
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
