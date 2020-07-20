# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans,d;
        cin>>a>>b;
        d=(a+b)/3;
        ans=min(a,b);
        ans=min(ans,d);
        cout<<ans<<"\n";
    }
}
