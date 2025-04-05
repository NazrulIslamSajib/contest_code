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
        if(n%2==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<n<<" ";
            for(int i=1;i<=n-1;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
