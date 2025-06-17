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
        map<char,long long>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int f=0;
        for(int i=1;i<n-1;i++)
        {
            mp[s[i]]--;
            if(mp[s[i]])
            {
                f=1;
                break;
            }
            mp[s[i]]++;
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
