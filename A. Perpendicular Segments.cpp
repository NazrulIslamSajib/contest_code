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
        long long x,y,k;
        cin>>x>>y>>k;
        cout<<0<<" "<<0<<" "<<min(x,y)<<" "<<min(x,y)<<endl;
        cout<<min(x,y)<<" "<<0<<" "<<0<<" "<<min(x,y)<<endl;
    }
    return 0;
}

 
