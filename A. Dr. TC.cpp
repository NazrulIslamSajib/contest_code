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
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                ans++;
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
             if(s[i]=='1')
             {
                 sum+=(ans-1);
             }
             else
             {
                 sum+=ans+1;
             }
        }
        cout<<sum<<endl;
    }
    return 0;
}
