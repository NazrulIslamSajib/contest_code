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
         int n;
         cin>>n;
         string s;
         cin>>s;
         map<int,int>ans;
         int x1=1;
         int y1=n;
         for(int i=n-2;i>=0;i--)
         {
             if(s[i]=='<')
             {
                 ans[i+2]=x1;
                 x1++;
             }
             else
             {
                 ans[i+2]=y1;
                 y1--;
             }
         }
         map<int,int>vis;
         for(int i=1;i<=n;i++)
         {
             if(ans[i]!=0)
             {
                 vis[ans[i]]=1;
             }
         }
         long long need;
         for(int i=1;i<=n;i++)
         {
             if(vis[i]==0)
             {
                 need=i;
                 break;
             }
         }
         for(int i=1;i<=n;i++)
         {
             if(ans[i]==0)
             {
                 cout<<need<<" ";
             }
             else
             {
                 cout<<ans[i]<<" ";
             }
         }
         cout<<endl;
    }
    return 0;
}
