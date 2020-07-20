# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans,mve;
        cin>>n>>k;
        mve=(k-1)/(n-1);
        ans=k+mve;
        cout<<ans<<"\n";
    }

}
