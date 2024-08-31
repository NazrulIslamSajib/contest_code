#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n,m;
        cin>>n>>m;
        long long arr[n+10],max1=0,i;
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            max1=max(max1,arr[i]);
        }
        while(m--)
        {
            char c;
            cin>>c;
            long long l,r;
            cin>>l>>r;
            if(max1<l)
            {
                cout<<max1<<" ";
            }
            else if(l<=max1 && r>=max1)
            {
                if(c=='+')
                {
                    max1++;
                    cout<<max1<<" ";
                }
                else
                {
                    max1--;
                    cout<<max1<<" ";
                }
            }
            else
            {
                cout<<max1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
