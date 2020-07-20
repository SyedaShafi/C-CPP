# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans,rem;
        cin>>n;
        rem=n%2;
        if (rem) ans=(n/2);
        else ans=(n/2)-1;
        cout<<ans<<"\n";
    }
}
