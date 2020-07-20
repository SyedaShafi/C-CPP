# include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std ;
int main ()
{
    ll s,n,i;
    vector <pair<ll,ll>> v;
    bool result;
    cin>>s>>n;
    ll x[n],y[n];
    for (i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }

    for (i=0;i<n;i++)
    {
        v.push_back(make_pair(x[i],y[i]));
    }
    sort(v.begin(),v.end());

    for (i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            result=true;
            s+=v[i].second;
        }
        else {
            result=false;
            break;
        }
    }
    if(result) cout<<"YES\n";
    else cout<<"NO\n";
}
