# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,mn,mx,result;
        cin>>a>>b;
        mx=max(a,b);
        mn=min(a,b);
        mn=mn*2;
        result=max(mx,mn);
        cout<<result*result<<endl;

    }
}

