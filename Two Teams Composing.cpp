# include <bits/stdc++.h>
# include <set>
typedef long long ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,i,same,distinct,x;
       cin>>n;
       vector<ll> v(n+1);

       for (i=0;i<n;i++)
       {
           cin>>x;
           v[x]++;
       }

       same=*max_element(v.begin(),v.end());
       distinct=n+1-count(v.begin(),v.end(),0);
       cout<<max(min(same-1,distinct),min(same,distinct-1))<<"\n";
    }
}