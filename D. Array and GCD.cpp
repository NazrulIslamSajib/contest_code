#include<bits/stdc++.h>
using namespace std;
const int mx=1e8;
bool prime[mx+10];
long long max1=mx,i;///1 koti number nichi 5 lac prime number ber korte
vector<long long>v;
void solve()
{
    prime[0]=true;
    prime[1]=true;
    for(i=2;i*i<=max1;i++)
    {

        if(prime[i]==false)
        {
            for(long long j=i*i;j<=max1;j=j+i)
            {
                prime[j]=true;
            }
        }
    }
    for(i=2;i<=max1;i++)
    {
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    solve();
    cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;
        long long arr[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        long long have=0,cnt=0,ans=0;
        for(int i=n;i>=1;i--)
        {
            if(arr[i]>v[cnt])
            {
                have+=arr[i]-v[cnt];
                cnt++;
            }
            else
            {
                 long long loss=v[cnt]-arr[i];
                 if(loss>have)
                 {
                     ans++;
                 }
                 else
                 {
                     have-=loss;
                     cnt++;
                 }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
