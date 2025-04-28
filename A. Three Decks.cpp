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
        long long a,b,c;
        cin>>a>>b>>c;
        long long sum=(a+b+c);
        if(sum%3!=0)
        {
          cout<<"NO"<<endl;
          continue;
        }
        long long need=sum/3;
        long long have=c-need;
        if(b>need)
        {
          cout<<"NO"<<endl;
          continue;
        }
        have-=(need-b);
        if(a>need)
        {
          cout<<"NO"<<endl;
          continue;
        }
        a+=have;
        if(a!=need)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
