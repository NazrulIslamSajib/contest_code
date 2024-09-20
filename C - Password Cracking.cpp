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
        string s="";
        while(s.size()!=n)
        {
            cout<<"? "<<s+'0'<<endl;
            int f;
            cin>>f;
            if(f)
            {
                s=s+'0';
                continue;
            }
            cout<<"? "<<s+'1'<<endl;
            cin>>f;
            if(f)
            {
                s=s+'1';
                continue;
            }
            break;
        }
        while(s.size()!=n)
        {
            cout<<"? "<<'0'+s<<endl;
            int f;
            cin>>f;
            if(f)
            {
                s='0'+s;
                continue;
            }
            s='1'+s;
        }
        cout<<"! "<<s<<endl;
    }
    return 0;
}
