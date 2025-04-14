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
        int n;
        cin>>n;
        long long arr[n+10][n+10];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
                mp[i+j]=arr[i][j];
            }
        }
        vector<int>v;
        set<int>st;
        for(int i=1;i<=2*n;i++)
        {
           if(mp[i]!=0)
           {
               st.insert(mp[i]);
           }
        }
        for(int i=1;i<=2*n;i++)
        {
            if(st.find(i)==st.end())
            {
                v.push_back(i);
            }
        }
        for(int i=1;i<=2*n;i++)
        {
            if(mp[i]==0)
            {
                cout<<v.back()<<" ";
                v.pop_back();
            }
            else
            {
                cout<<mp[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
