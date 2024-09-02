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
        long long a,b;
        cin>>a>>b;
        if(b%2==0 && a%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(b%2==1)
        {
            if(a>=2)
            {
                a-=2;
                if(a%2==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
