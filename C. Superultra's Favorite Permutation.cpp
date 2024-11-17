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
       if(n<=4)
       {
           cout<<-1<<endl;
       }
       else
       {
           for(int i=1;i<=n;i+=2)
           {
               if(i!=5)
               {
                   cout<<i<<" ";
               }
           }
           cout<<5<<" "<<4<<" ";
           for(int i=2;i<=n;i+=2)
           {
               if(i!=4)
               {
                   cout<<i<<" ";
               }

           }
           cout<<endl;
       }
    }
    return 0;
}
