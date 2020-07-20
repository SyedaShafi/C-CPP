# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
   ll n;
   cin>>n;
   ll a[n],ai,bi,w=0,b=0,i;
   for (i=0;i<n;i++) cin>>a[i];

   ai=a[0];
   bi=a[0];

   for (i=1;i<n;i++)
   {
       if (ai>a[i])
       {
           ai=min(ai,a[i]);
           w++;
       }

       if (bi<a[i])
       {
           bi=max(bi,a[i]);
           b++;
       }
   }


   cout<<b<<" "<<w<<"\n";
}
