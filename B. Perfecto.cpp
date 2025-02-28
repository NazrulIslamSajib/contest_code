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
       long long num=(n*(n+1))/2;
       long long sq=sqrt(num);
       if(sq*sq==num)
       {
           cout<<-1<<endl;
           continue;
       }
       long long sum=0;
       vector<long long>v;
       for(int i=1;i<=n;i++)
       {
           if(!v.empty())
           {
               cout<<v.back()<<" ";
               sum+=v.back();
               v.pop_back();
           }
           else
           {
               long long take=sum+i;
               long long sq1=sqrt(take);
               if(sq1*sq1==take)
               {
                   cout<<i+1<<" ";
                   sum+=(i+1);
                   v.push_back(i);
               }
               else
               {
                   cout<<i<<" ";
                   sum+=(i);
               }
           }
       }
       cout<<endl;



    }
    return 0;
}
