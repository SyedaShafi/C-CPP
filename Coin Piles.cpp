# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if (2*a-b>=0 && (2*a-b)%3==0 && 2*b-a>=0 && (2*b-a)%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
