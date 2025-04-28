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
         if(n<=2)
         {

            if(s[0]=='A')
            {
                cout<<"Alice"<<endl;
            }
            else
            {
                cout<<"Bob"<<endl;
            }
            continue;
         }
         if(s[n-1]==s[0])
         {
             if(s[0]=='A')
             {
                 cout<<"Alice"<<endl;
             }
             else
             {
                 cout<<"Bob"<<endl;
             }
          }
          else
          {
               if(s[n-1]=='B')
               {
                   int f=0;
                   for(int i=0;i<n-1;i++)
                   {
                       if(s[i]=='B')
                       {
                           f=1;
                       }
                   }
                   if(f)
                   {
                       cout<<"Bob"<<endl;
                   }
                   else
                   {
                       cout<<"Alice"<<endl;
                   }
               }
               else if(s[n-1]==s[n-2] && s[n-1]=='A')
               {
                   cout<<"Alice"<<endl;
               }
               else
               {
                   cout<<"Bob"<<endl;
               }
          }
    }
    return 0;
}
