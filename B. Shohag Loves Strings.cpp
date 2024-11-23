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
        long long f=0,n;
        n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cout<<s[i]<<s[i]<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for(int i=0;i<n-2;i++)
            {
                set<char>st;
                st.insert(s[i]);
                st.insert(s[i+1]);
                st.insert(s[i+2]);
                if(st.size()==3)
                {
                    cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
