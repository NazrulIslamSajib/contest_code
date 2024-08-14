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
       if(s.size()>=3)
       {
           long long ok=s[2]-'0';
           if(s[0]=='1' && s[1]=='0' && ok>=2 && s.size()==3)
           {
               cout<<"YES"<<endl;
           }
           else if(s[0]=='1' && s[1]=='0' && ok>=1 && s.size()>=4)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}

 
