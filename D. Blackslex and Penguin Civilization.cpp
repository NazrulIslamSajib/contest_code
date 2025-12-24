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
        vector<long long>v;
        map<long long,long long>mp;
        for(long long i=n;i>=1;i--)
        {
              long long ok=(1LL<<i)-1;
              for(long long j=1;j<=(1LL<<n)-1;j++)
              {

                  if((j&ok)==ok && mp[j]==0)
                  {
                      cout<<j<<" ";
                      mp[j]=1;
                  }
              }
        }
        for(int i=0;i<=(1LL<<n)-1;i++)
        {
            if(mp[i]==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
