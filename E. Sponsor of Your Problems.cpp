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
         string s1,s2;
         cin>>s1>>s2;
         long long ans=0,f=0,index=-1;
         for(int i=0;i<s1.size();i++)
         {
             if(s1[i]==s2[i])
             {
                 ans+=2;
             }
             else
             {
                  index=i;
                  break;
             }
         }
         if(index!=-1)
         {
              long long num1=0,num2=0;
              for(int i=1;i<=9;i++)
              {
                  num1=(num1*10+s1[index]-'0');
                  num2=(num2*10+s2[index]-'0');
                  if((num2-num1)==1)
                  {
                      ans++;
                  }
                  else
                  {
                      break;
                  }
                  index++;
                  if(index>=s1.size())
                  {
                      break;
                  }

              }
              cout<<ans<<endl;

         }
         else
         {
             cout<<ans<<endl;
         }
    }
    return 0;
}
