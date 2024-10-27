#include<bits/stdc++.h>
using namespace std;
long long n;
long long max1=0;
map<long long,vector<long long>>mp;
map<long long,long long>vis;
map<long long,long long>dp;
long long call(long long need)
{
    max1=max(max1,need);
    if(vis[need]==0)
    {
        return  0;
    }
    if(dp[need])
    {
        return dp[need];
    }
    long long result=need;
    for(auto x:mp[need])
    {
        if(x!=0)
        {
           result=max(result,call(need+x));

        }

    }
    return dp[need]=result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
      vis.clear();
      mp.clear();
      dp.clear();
      cin>>n;
      max1=n;
      long long arr[n+10];
      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
      }
      for(int i=1;i<=n;i++)
      {
          long long length=arr[i]+i-1;
          mp[length].push_back(i-1);
          vis[length]=1;
      }
      for(auto x:mp[n])
      {
         if(x!=0)
         call(n+x);
      }
      cout<<max1<<endl;

    }
    return 0;
}
