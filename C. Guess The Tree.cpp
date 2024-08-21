#include<bits/stdc++.h>
using namespace std;
long long query(int par,int i)
{
    cout<<"? "<<par<<" "<<i<<endl;
    long long ask;
    cin>>ask;
    return ask;
}
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n,i;
        cin>>n;
        vector<pair<long long,long long>>v;
        for(i=2;i<=n;i++)
        {
            int par=1;
            while(1)
            {
                int gave=query(par,i);
                if(par==gave)
                {
                    break;
                }
                par=gave;
            }
            v.push_back({par,i});
        }
        cout<<"! ";
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<" ";
        }
    }
    return 0;
}
