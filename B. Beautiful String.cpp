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
         string s;
         cin>>s;
         vector<long long>v;
         for(int i=0;i<n;i++)
         {
              if(s[i]=='0')
              {
                  v.push_back(i+1);
              }
         }
         if(v.size()>=1)
         {
             cout<<v.size()<<endl;
             for(auto x:v)
             {
                 cout<<x<<" ";
             }
             cout<<endl;
         }
         else
         {
              cout<<0<<endl;
         }

    }
    return 0;
}
