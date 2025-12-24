#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long tt=1;
    cin>>tt;
    while(tt--)
    {
         long long n;
         cin>>n;
         long long arr[n+2];
         set<long long>st;
         vector<long long>v;
         for(int i=1;i<=n;i++)
         {
             cin>>arr[i];
             st.insert(arr[i]);
         }
         if(st.size()>=2)
         {
              for(auto x:st)
              {
                  v.push_back(x);
              }
              if(v[0]*2<v[1])
              {
                  cout<<v[1]-v[0]<<endl;
              }
              else
              {
                  cout<<*st.begin()<<endl;
              }
         }
         else
         {
             cout<<*st.begin()<<endl;
         }
    }
    return 0;
}
