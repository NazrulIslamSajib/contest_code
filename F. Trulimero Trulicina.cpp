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
       long long n,m,k;
       cin>>n>>m>>k;
       deque<int>dq;
       if(k==m || m%k==0)
       {
       for(int i=1;i<=1;i++)
       {
           long long x=1;
           for(int j=1;j<=m;j++)
           {
               dq.push_back(x);
               if(x==k)
               {
                   x=1;
               }
               else
               {
                   x++;
               }
           }
       }
       for(int i=1;i<=n;i++)
       {
           deque<int>tmp=dq;
           for(int j=1;j<=m;j++)
           {
               cout<<dq.front()<<" ";
               dq.pop_front();
           }
           long long need=tmp.front();
           tmp.pop_front();
           tmp.push_back(need);
           cout<<endl;
           dq=tmp;
       }
       }
       else
       {
           int x=1;
           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<=m;j++)
               {
                   cout<<x<<" ";
                   if(x==k)
                   {
                       x=1;
                   }
                   else
                   {
                       x++;
                   }
               }
               cout<<endl;
           }
       }
    }
    return 0;
}
