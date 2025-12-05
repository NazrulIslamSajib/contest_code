#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long tt=1;
    cin>>tt;
    while(tt--)
    {
        long long n,k;
        cin>>n>>k;
        long long arr[n+2];
        set<long long>st;
        map<long long,long long>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
            mp[arr[i]]++;
        }
        sort(arr+1,arr+n+1);
        int f=0;
        vector<long long>v;
        for(long long i=1;i<=n;i++)
        {
             if(st.size()>=1 && st.find(arr[i])!=st.end())
             {
                 v.push_back(arr[i]);
                 for(long long j=1;j<=k;j++)
                 {
                        if(j*arr[i]<=k)
                        {

                        if(mp[j*arr[i]]==0)
                        {
                            f=1;
                            break;
                        }
                        else if(st.size()>=1)
                        {
                              if(st.find(j*arr[i])!=st.end())
                              {
                                  st.erase(j*arr[i]);
                              }
                        }
                        }
                        else
                        {
                            break;
                        }
                 }
             }
             if(f)
             {
                 break;
             }
        }
        if(f)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<v.size()<<endl;
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
