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
         long long max1=0,start=1;
         map<long long,vector<long long>>mp1;
         map<long long,long long>mp;
         for(int i=1;i<=n;i++)
         {
               cout<<"? "<<i<<" "<<n<<" ";
               for(int j=1;j<=n;j++)
               {
                   cout<<j<<" ";
               }
               cout<<endl;
               long long q;
               cin>>q;
               mp[i]=q;
               mp1[q].push_back(i);
               if(max1<q)
               {
                   start=i;
                   max1=max(max1,q);
               }

         }
         if(max1==1)
         {
             cout<<"! "<<1<<" "<<start<<endl;
             continue;
         }
         vector<long long>v1;
         long long start1=start;
         for(int i=max1-1;i>=1;i--)
         {
               vector<long long>v=mp1[i];
               for(auto x:v)
               {
                    cout<<"? "<<start<<" "<<2<<" "<<min(start,x)<<" "<<max(start,x)<<endl;
                    long long q;
                    cin>>q;
                    if(q==2)
                    {
                         start=x;
                         v1.push_back(start);
                         break;
                    }

               }
         }
         cout<<"! "<<max1<<" "<<start1<<" ";
         for(auto x:v1)
         {
             cout<<x<<" ";
         }
         cout<<endl;


    }
    return 0;
}
