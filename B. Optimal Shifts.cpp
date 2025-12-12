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
       string s;
       cin>>s;
       long long ans=0;
       for(int i=0;i<n;i++)
       {
            if(s[i]=='0')
            {
                long long cnt=0;
                while(i<n && s[i]=='0')
                {
                    cnt++;
                    i++;
                }
                ans=max(cnt,ans);
                i--;
            }
       }
       long long cnt=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               break;
           }
           else
           {
               cnt++;
           }
       }
       for(int i=n-1;i>0;i--)
       {
           if(s[i]=='1')
           {
               break;
           }
           else
           {
               cnt++;
           }
       }
       ans=max(ans,cnt);
       cout<<ans<<endl;
    }
    return 0;
}
