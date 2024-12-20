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
       long long n=s.size();
       long long index=n,f=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='0')
           {
               index=i;
               f=1;
               break;
           }
       }
       if(f==0)
       {
           cout<<1<<" "<<n<<" "<<1<<" "<<1<<endl;
           continue;
       }
       long long lagbe=n-index,ans;
       string max1="0";
       for(int i=0;i<index;i++)
       {
             long long x=index,y=i,loop=lagbe,sum=0;
             string now;
             while(loop--)
             {
                 if(s[x]!=s[y])
                 {
                    now+='1';
                 }
                 else
                 {
                     now+='0';
                 }
                 x++;
                 y++;
             }

             if(now>max1)
             {
                 max1=now;
                 ans=i;
             }
       }
       cout<<1<<" "<<n<<" "<<ans+1<<" "<<ans+lagbe<<endl;
    }
    return 0;
}
