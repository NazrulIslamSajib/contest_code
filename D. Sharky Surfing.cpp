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
        long long n,q,l;
        cin>>n>>q>>l;
        vector<pair<long long,long long>>arr;
        map<long long,long long>mp;
        for(int i=1;i<=n;i++)
        {
            long long x,y;
            cin>>x>>y;
            arr.push_back({x,y});
            mp[x]=1;
        }
        for(int i=1;i<=q;i++)
        {
            long long x,y;
            cin>>x>>y;
            arr.push_back({x,y});
        }
        priority_queue<long long>pq;
        sort(arr.begin(),arr.end());
        long long have=1,f=0,cnt=0;
        for(int i=0;i<n+q;i++)
        {
            ///cout<<arr[i].first<<" "<<arr[i].second<<endl;
            if(mp[arr[i].first]==1)
            {
                long long max1=arr[i].second-arr[i].first+2;
                if(have>=max1)
                {
                  // pq.push(arr[i].second);
                }
                else
                {
                    if(pq.size()>=1)
                    {
                        while(!pq.empty())
                        {
                            have+=pq.top();
                            //cout<<pq.top()<<endl;
                            cnt++;
                            ///cout<<have<<" "<<pq.top()<<endl;
                            pq.pop();
                            if(have>=max1)
                            {
                                break;
                            }
                        }
                        if(have<max1)
                        {
                            f=1;
                            break;
                        }
                    }
                    else
                    {
                        f=1;
                       /// cout<<arr[i].first<<" "<<arr[i].second<<endl;
                        break;
                    }
                }
            }
            else
            {
                ///cout<<arr[i].second<<endl;
                pq.push(arr[i].second);
            }
        }
        if(f==0)
        {
            if(pq.size()>=1)
            {
                cout<<cnt<<endl;
            }
            else
            {
                cout<<q<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
 
