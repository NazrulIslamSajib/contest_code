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
        long long h,w,a,b;
        cin>>h>>w>>a>>b;
        long long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        vector<pair<long long,long long>>v;
        v.push_back({x1,y1});
        v.push_back({x2,y2});
        sort(v.begin(),v.end());
        int f=0;
        if(v[0].second+b<=v[1].second)
        {
             long long gap=v[1].second-(v[0].second+b);
             if(gap>=0 && gap%b==0)
             {
                 f=1;
             }

        }
        if(v[1].second+b<=v[0].second)
        {
             long long gap=v[0].second-(v[1].second+b);
             if(gap>=0 && gap%b==0)
             {
                 f=1;
             }
        }
        if(v[0].first+a<=v[1].first)
        {
            long long gap=v[1].first-(v[0].first+a);
            if(gap>=0 && gap%a==0)
            {
                f=1;
            }

        }
        if(v[1].first+a<=v[0].first)
        {
            long long gap=v[0].first-(v[1].first+a);
            if(gap>=0 && gap%a==0)
            {
                f=1;
            }

        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
