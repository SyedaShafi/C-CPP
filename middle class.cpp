# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,i,sum=0,j,d;
        cin>>n>>x;
        d=n;
        ll a[n];
        for (i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        sort(a,a+n);
        j=0;
        while(d)
        {
            if ((sum/d)>=x)
            {
                cout<<d<<"\n";
                break;
            }
            else
            {
               sum=sum-a[j];
               j++ ;
               d--;
            }
        }
        if (!d) cout<<0<<"\n";

    }
}

