# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd(ll x,ll y)
{
    if (x==0) return y;
    if (y==0) return x;
    return gcd(y,x%y);
}
int main ()
{
    ll n;
    cin>>n;
    ll a[n],i,ans;
    for (i=0; i<n; i++)
        cin>>a[i];
    ans=a[0];

    for(i=1; i<n; i++)
    {
        ans=(ans/(gcd(ans,a[i])))*a[i];
    }
    cout<<ans<<"\n";
}
