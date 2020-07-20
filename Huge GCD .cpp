# include <bits/stdc++.h>
using namespace std;
#define M 1000000007
typedef long long int ll;
ll gcd(ll x,ll y)
{
    if (x==0) return y;
    if (y==0) return x;
    return gcd(y,x%y);
}
int  main ()
{
    ll n,m,i,ans;
    cin>>n;
    ll a[n],aa=1;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
        aa=((aa%M)*(a[i]%M))%M;
    }
    cin>>m;
    ll b[m],bb=1;

    for (i=0; i<m; i++)
    {
        cin>>b[i];
        bb=((bb%M)*(b[i]%M))%M;
    }
    ans=gcd(aa,bb);
    cout<<ans%M<<"\n";
}

