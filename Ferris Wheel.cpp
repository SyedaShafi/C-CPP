# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,x,i,ans=0,j;
    cin>>n>>x;
    ll a[n];
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    i=0;
    j=n-1;
    while(i<j)
    {
        if (a[i]+a[j]>x)
        {
            ans++;
            j--;
        }

        else {
            ans++;
            j--;
            i++;
        }
    }
    if (i==j)cout<<ans+1<<"\n";
    else cout<<ans<<"\n";
}
