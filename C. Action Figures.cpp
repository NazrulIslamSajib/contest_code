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
       long long sum=0;
       priority_queue<long long>pq;
       for(int i=n-1;i>=0;i--)
       {
           if(s[i]=='0')
           {
               if(!pq.empty())
               {
                   pq.pop();
               }
               sum+=(i+1);
           }
           else
           {
               pq.push(i+1);
           }
       }
       vector<long long>v;
       while(!pq.empty())
       {
           v.push_back(pq.top());
           pq.pop();
       }
       sort(v.begin(),v.end());
       for(int i=1;i<=(v.size()+1)/2;i++)
       {
           sum+=(v[i-1]);
       }
       cout<<sum<<endl;
    }
    return 0;
}
