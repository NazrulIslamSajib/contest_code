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
         long long n,q;
         cin>>n>>q;
         long long mx=600;
         char arr[620];
         string s;
         cin>>s;
         int f=0;
         for(int i=0;i<n;i++)
         {
              if(s[i]=='B')
              {
                  f=1;
              }
         }
         long long index=0;
         for(int i=1;i<=mx;i++)
         {
             arr[i]=s[index];
             index++;
             if(index==n)
             {
                 index=0;
             }
         }
         long long brr[q+10];
         for(int i=1;i<=q;i++)
         {
             cin>>brr[i];
         }
         for(int i=1;i<=q;i++)
         {
              long long a=brr[i],sum=0;
              if(f==0)
              {
                  cout<<a<<endl;
                  continue;
              }
              for(int j=1;j<=mx;j++)
              {
                    if(arr[j]=='A')
                    {
                        a--;
                        sum++;
                    }
                    else
                    {
                        a=a/2;
                        sum++;
                    }
                    if(a<=0)
                    {
                        break;
                    }
              }
              cout<<sum<<endl;
         }
    }
    return 0;
}
