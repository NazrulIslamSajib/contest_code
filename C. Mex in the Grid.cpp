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
         long long arr[n+5][n+5];
         long long need=(n*n)-1;
         long long row=1,col=n;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 arr[i][j]=-1;
             }
         }
         long long row1=1,row2=n,col1=1,col2=n;
         while(row1<=row2 && col1<=col2)
         {

             for(int i=col1;i<=col2;i++)
             {
                 arr[row1][i]=need;
                 need--;
             }
             row1++;
             for(int i=row1;i<=row2;i++)
             {
                 arr[i][col2]=need;
                 need--;
             }
             col2--;
             for(int i=col2;i>=col1;i--)
             {
                 arr[row2][i]=need;
                 need--;
             }
             row2--;
             for(int i=row2;i>=row1;i--)
             {
                 arr[i][col1]=need;
                 need--;
             }
             col1++;

         }
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 cout<<arr[i][j]<<" ";
             }
             cout<<endl;
         }

    }
    return 0;
}
