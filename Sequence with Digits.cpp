# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll num(ll a)
{
    ll mx=0,mi=10,r;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        mx=max(mx,r);
        mi=min(mi,r);
    }

    return mx*mi;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll a,k,m;
       cin>>a>>k;
       k--;
       while(k--)
       {
           m=num(a);
           if (m==0) break;
           a=a+m;
       }

       cout<<a<<"\n";
   }
}
