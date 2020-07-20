# include <bits/stdc++.h>
typedef long long ll;
using namespace std ;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,k,sum=0,i,s=0;
       cin>>n>>k;
       ll a[n];
       for (i=0;i<n;i++)
       {
           cin>>a[i];
           s=s+a[i];
           if (a[i]>k) sum=sum+k;
           else sum=sum+a[i];

       }
       cout<<s-sum<<"\n";
   }
}
