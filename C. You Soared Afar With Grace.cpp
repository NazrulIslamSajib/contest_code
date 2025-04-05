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
       long long arr[n+10],brr[n+10];
       map<long long,long long>mp1,mp2;
       for(int i=1;i<=n;i++)
       {
           cin>>arr[i];
           mp1[arr[i]]=i;
       }
       for(int i=1;i<=n;i++)
       {
           cin>>brr[i];
           mp2[brr[i]]=i;
       }
       vector<pair<long long,long long>>v;
       int index,cnt=0,f=0;
       for(int i=1;i<=n;i++)
       {
           if(arr[i]==brr[i])
           {
               cnt++;
               index=i;
           }
           else if(mp2[arr[i]]!=mp1[brr[i]])
           {
               f=1;
               break;
           }
       }
       if(cnt>=2 || f==1)
       {
           cout<<-1<<endl;
           continue;
       }
       else if(cnt==1)
       {
           if(n%2)
           {

           }
           else
           {
               cout<<-1<<endl;
               continue;
           }
       }
       if(n%2)
       {
          int mid=(n+1)/2;
          if(arr[mid]!=brr[mid])
          {
          v.push_back({index,mid});
          swap(arr[index],arr[mid]);
          swap(brr[index],brr[mid]);
          mp1[arr[index]]=index;
          mp1[arr[mid]]=mid;
          mp2[brr[index]]=index;
          mp2[brr[mid]]=mid;
          }
       }
       for(int i=n;i>=1;i--)
       {
           int index=n-(i-1);
           if(arr[i]!=brr[index])
           {
              int need=mp2[arr[i]];
              v.push_back({index,need});
              swap(arr[index],arr[need]);
              swap(brr[index],brr[need]);
              mp1[arr[index]]=index;
              mp1[arr[need]]=need;
              mp2[brr[index]]=index;
              mp2[brr[need]]=need;

           }
       }
       cout<<v.size()<<endl;
       for(auto x:v)
       {
           cout<<x.first<<" "<<x.second<<endl;
       }
    }
    return 0;
}
