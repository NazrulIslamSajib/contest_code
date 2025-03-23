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
       int n,m;
       cin>>n>>m;
       char arr[n+10][m+10];
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               cin>>arr[i][j];
           }
       }
       int f=0;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               if(arr[i][j]=='1')
               {
                   int cnt=0,cnt1=0;
                   for(int l=i;l>=1;l--)
                   {
                       cnt++;
                       if(arr[l][j]=='1')
                       {
                           cnt1++;
                       }
                   }
                   if(cnt1!=cnt)
                   {
                   int cnt2=0,cnt3=0;
                   for(int l=j;l>=1;l--)
                   {
                       cnt2++;
                       if(arr[i][l]=='1')
                       {
                           cnt3++;
                       }
                   }
                   if(cnt2!=cnt3)
                   {
                       f=1;
                       break;
                   }
                   }
               }
           }
            if(f)
               {
                   break;
               }
       }
       if(f)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }
    }
    return 0;
}
