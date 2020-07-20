# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
   ll n,i,ans=1;
   cin>>n;
   ll a[n];
   for (i=0;i<n;i++) cin>>a[i];

   sort(a,a+n);

   for (i=0;i+1<n;i++)
   {
       if (a[i]!=a[i+1])
        ans++;
   }

   cout<<ans<<"\n";
}
