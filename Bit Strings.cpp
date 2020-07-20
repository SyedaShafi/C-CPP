# include <bits/stdc++.h>
typedef long long  ll;
using namespace std;

ll power(ll x,ll p, ll md)
{
    ll ans=1,i;
    for (i=1;i<=p;i++)
    {
        ans=ans*x%md;
    }

    return ans;
}
int main ()
{
    ll n;
    cin>>n;
    cout<<power(2,n,1e9+7)<<"\n";

}
