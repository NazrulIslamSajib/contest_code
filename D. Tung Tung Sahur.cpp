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
        string p,s;
        cin>>p>>s;
        vector<pair<char,int>>v1,v2;
        for(int i=0;i<p.size();i++)
        {
            int cnt=1,f=0;
            char c=p[i];
            while(i+1<p.size() && p[i]==p[i+1])
            {
                cnt++;
                f=1;
                i++;
            }
            v1.push_back({c,cnt});

        }
        for(int i=0;i<s.size();i++)
        {
            int cnt=1,f=0;
            char c=s[i];
            while(i+1<s.size() && s[i]==s [i+1])
            {
                cnt++;
                f=1;
                i++;
            }
            v2.push_back({c,cnt});

        }
        /*
        cout<<v1.size()<<" "<<v2.size()<<endl;
        for(auto x:v2)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        */
        if(v1.size()!=v2.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        int f=0;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i].first==v2[i].first && (v2[i].second>=v1[i].second && v2[i].second<=2*v1[i].second))
            {

            }
            else
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
