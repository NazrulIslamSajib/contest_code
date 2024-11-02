#include<bits/stdc++.h>
using namespace std;
string s;
bool valid(long long x)
{
    if(s[x]=='0')
    {
         if(x-3>=0 && s[x-1]=='0' && s[x-2]=='1' && s[x-3]=='1')
         {
            return true;
         }
         if(x-2>=0 && x+1<s.size() && s[x-1]=='1' && s[x-2]=='1' && s[x+1]=='0')
         {
             return true;
         }
         return false;
    }
    else
    {
         if(x+3<s.size() && s[x+1]=='1' && s[x+2]=='0' && s[x+3]=='0')
         {
             return true;
         }
         if(x+2<s.size() && x-1>=0 && s[x+1]=='0' && s[x+2]=='0' && s[x-1]=='1')
         {
            return true;
         }
         return false;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
       cin>>s;
       long long cnt=0;
       for(int i=0;i<s.size();i++)
       {
           if(i+3<s.size() && s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
           {
               cnt++;
               i+=3;
           }
       }
       long long q;
       cin>>q;
       while(q--)
       {
          long long x;
          char y;
          cin>>x>>y;
          x--;
          if(valid(x))
          {
              cnt--;
          }
          s[x]=y;
          if(valid(x))
          {
              cnt++;
          }
          if(cnt>=1)
          {
              cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
          if(cnt<=0)
          {
              cnt=0;
          }
       }
    }
    return 0;
}
