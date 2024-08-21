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
      long long arr[n+10],i;
      map<long long,long long>mp;
      set<long long>st;
      long long max1=0;
      for(i=1;i<=n;i++)
      {
          cin>>arr[i];
          st.insert(arr[i]);
          mp[arr[i]]++;
          max1=max(mp[arr[i]],max1);
      }
      if(st.size()==n)
      {
          cout<<n-1<<endl;
      }
      else
      {
          cout<<n-max1<<endl;
      }
    }
    return 0;
}
