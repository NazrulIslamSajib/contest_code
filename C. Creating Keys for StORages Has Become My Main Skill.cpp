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
       long long n,x;
       cin>>n>>x;
       if(n==1)
       {
           cout<<x<<endl;
           continue;
       }
       vector<long long>v;
       long long sum=0;
       v.push_back(0);
       int f=0;
       for(int i=1;i<=n-2;i++)
       {
            for(int j=0;j<=30;j++)
            {
                if((1LL<<j)&i)
                {
                    if((1LL<<j)&x)
                    {
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==0)
            {
                sum=sum|i;
                v.push_back(i);
            }
            else
            {
                v.push_back(0);
            }
       }
       if(((n-1)|sum)==x)
       {
           v.push_back(n-1);
       }
       else if(sum<x)
       {
           v.push_back(x-sum);
       }
       else
       {
           v.push_back(0);
       }
       for(auto x:v)
       {
           cout<<x<<" ";
       }
       cout<<endl;

    }
    return 0;
}
