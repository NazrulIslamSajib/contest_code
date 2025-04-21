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
       int f=0;
       string s,tmp,s1;
       cin>>s;
       s1=s;
       int index1=-1,index2=-1;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               index1=i;
               break;
           }
       }
       s=s+'1';
       for(int i=index1+1;i<n;i++)
       {
           if(s[i]=='0' && s[i+1]=='1')
           {
               index2=i;
               break;
           }
       }
       if(index2!=-1 && index1!=-1)
       {
           string tmp1;
           for(int i=0;i<index1;i++)
           {
               tmp1+=s[i];
           }
           for(int i=index1;i<=index2;i++)
           {
             tmp+=s[i];
           }
           reverse(tmp.begin(),tmp.end());
           tmp1+=tmp;
           for(int i=index2+1;i<n;i++)
           {
               tmp1+=s[i];
           }
           long long cnt=0;
           tmp1='0'+tmp1;
           for(int i=1;i<=n;i++)
           {
               if(tmp1[i]==tmp1[i-1])
               {
                   cnt++;
               }
               else
               {
                   cnt+=2;
               }
           }
          /// cout<<tmp1<<endl;
           cout<<cnt<<endl;
       }
       else
       {
           long long cnt=0;
           s1='0'+s1;
           for(int i=1;i<=n;i++)
           {
               if(s1[i]==s1[i-1])
               {
                   cnt++;
               }
               else
               {
                   cnt+=2;
               }
           }
          /// cout<<s1<<endl;
           cout<<cnt<<endl;
       }
    }
    return 0;
}
