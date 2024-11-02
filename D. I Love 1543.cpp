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
       char arr[n+10][m+10];
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               cin>>arr[i][j];
           }
       }
       int x1=1,x2=n,y1=1,y2=m,sum=0;
       while(x1<x2 && y1<y2)
       {
            vector<char>v;
            for(int j=y1;j<=y2;j++)
            {
                   v.push_back(arr[x1][j]);
            }
           x1++;
           for(int i=x1;i<=x2;i++)
           {
               v.push_back(arr[i][y2]);
           }
           y2--;
           for(int j=y2;j>=y1;j--)
           {
               v.push_back(arr[x2][j]);
           }
           x2--;
           for(int i=x2;i>=x1;i--)
           {
               v.push_back(arr[i][y1]);
           }
           y1++;
           if(v.size()>=4)
           {
               char first=v[0];
               char second=v[1];
               char third=v[2];
               v.push_back(first);
               v.push_back(second);
               v.push_back(third);
           }
           long long cnt=0;
           for(int i=0;i<v.size();i++)
           {
               if(i+3<v.size() && v[i]=='1' && v[i+1]=='5' && v[i+2]=='4' && v[i+3]=='3')
               {
                   cnt++;
                   i+=3;
               }
           }
           sum+=cnt;
       }
       cout<<sum<<endl;
    }
    return 0;
}
