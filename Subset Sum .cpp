# include <bits/stdc++.h>
typedef long long int ll;
using namespace std ;
int main ()
{
    ll n;
    cin>>n;
    ll a[n];
    for (ll i=0; i<n; i++) cin>>a[i];
    ll t,s,j=0,sum=0;
    while(t--)
    {
        cin>>s;
        sum=sum+a[j];
        if(sum>=s)
           {
              cout<<j+1<<"\n";
              sum=0;
              j=0;
           }
    }
}
