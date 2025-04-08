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
        string s;
        cin>>s;
        int n=s.size();
        int index=n-1,ans=0;
        for(int i=n-1;i>=0;i--)
        {
            int num=s[i]-'0';
            if(num>=1)
            {
                index=i;
                break;
            }
            else
            {
                ans++;
            }
        }
        for(int i=0;i<index;i++)
        {
            if(s[i]!='0')
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
