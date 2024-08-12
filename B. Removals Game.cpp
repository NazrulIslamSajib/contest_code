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
        long long n,i;
        cin>>n;
        vector<long long>v1,v2,v3,v4;
        for(i=1;i<=n;i++)
        {
            long long x;
            cin>>x;
            v1.push_back(x);
        }
        for(i=1;i<=n;i++)
        {
            long long x;
            cin>>x;
            v2.push_back(x);
        }
        long long l1=0,r1=n-1,l2=0,r2=n-1,f=0;
        for(i=0;i<n;i++)
        {
            if(v1[l1]!=v2[l2] && v1[l1]!=v2[r2])
            {
                f=1;
                break;
            }
            else if(v1[r1]!=v2[l2] && v1[r1]!=v2[r2])
            {
                f=1;
                break;
            }
            else
            {
                if(v2[l2]==v1[l1])
                {
                    l2++;
                }
                else if(v2[r2]==v1[l1])
                {
                    r2--;
                }
                l1++;
               /// cout<<l2<<" "<<r2<<endl;

            }
        }
        ///cout<<l1<<" "<<r1<<endl;
        ///cout<<l2<<" "<<r2<<endl;
        if(f==1)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
 
