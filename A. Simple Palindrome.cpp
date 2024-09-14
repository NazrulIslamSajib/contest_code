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
       string s="aeiou";
       long long n;
       cin>>n;
       long long ok=n/5;
       vector<char>v;
       for(int i=1;i<=ok;i++)
       {
           for(int j=0;j<5;j++)
           {
              v.push_back(s[j]);
           }
       }
       long long left=n%5;
       if(left!=0)
       {
           for(int i=0;i<left;i++)
           {
               v.push_back(s[i]);
           }
       }
       sort(v.begin(),v.end());
       for(auto x:v)
       {
           cout<<x;
       }
       cout<<endl;
    }
    return 0;
}
