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
            long long  x,k,f=0;
            cin>>x>>k;
            if(x==1 && k==2)
            {
                cout<<"YES"<<endl;
                continue;
            }
            if(k>=2)
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(x==1)
            {
                cout<<"NO"<<endl;
                continue;
            }
            for(long long i=2;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}
