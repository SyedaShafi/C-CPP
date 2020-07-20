# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll n,ans=0,i;
    cin>>n;
    ll a[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++)
    {
        if(a[i+1]-a[i]<0)
        {
            ans=ans+(a[i]-a[i+1]);
            a[i+1]=a[i+1]+(a[i]-a[i+1]);
        }
    }
    cout<<ans<<"\n";

}
