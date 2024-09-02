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
       if(n%2==0)
       {
       map<char,long long>odd,even;
       long long maxodd=0,maxeven=0;
       for(int i=0;i<n;i++)
       {
           if(i%2==0)
           {
               even[s[i]]++;
               maxeven=max(even[s[i]],maxeven);
           }
           else
           {
               odd[s[i]]++;
               maxodd=max(odd[s[i]],maxodd);
           }
       }
       cout<<(n/2)-maxeven+(n/2)-maxodd<<endl;
       }
       else
       {
           map<char,long long>odd,even;
           long long min1=INT_MAX;
           for(int i=0;i<n;i++)
           {
             if(i%2==0)
             {
               even[s[i]]++;
             }
             else
             {
               odd[s[i]]++;
             }

           }
           map<char,long long>cureven,curodd;
           for(int i=0;i<n;i++)
           {

                  if(i%2==0)
                  {
                    even[s[i]]--;
                  }
                  else
                  {
                    odd[s[i]]--;
                  }
                   for(auto x:odd)
                   {
                       char f=x.first;
                       long long s=x.second;
                       cureven[f]+=s;
                   }
                   for(auto x:even)
                   {
                        char f=x.first;
                        long long s=x.second;
                        curodd[f]+=s;
                   }
                long long maxodd=0,maxeven=0;
                for(auto x:cureven)
                {
                   maxeven=max(maxeven,x.second);
                }
                for(auto x:curodd)
                {
                   maxodd=max(maxodd,x.second);
                }
                  long long ok=(n/2)-maxodd+(n/2)-maxeven+1;
                  min1=min(min1,ok);
                  for(auto x:odd)
                   {
                       char f=x.first;
                       long long s=x.second;
                       cureven[f]-=s;
                   }
                   for(auto x:even)
                   {
                        char f=x.first;
                        long long s=x.second;

                        curodd[f]-=s;
                   }
                if(i%2==1)
                {
                       curodd[s[i]]++;
                }
                else
                {
                       cureven[s[i]]++;
                }

           }
           cout<<min1<<endl;

       }
    }
    return 0;
}
