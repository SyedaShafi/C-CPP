# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        ll n;
        cin>>n;
        ll a[n],i;
        for(i=0; i<n; i++)
            cin>>a[i];
        //sort(a,a+n);
        for (i=0; i+1<n; i++)
        {
            if (abs(a[i+1]-a[i])>1)
            {
                cout<<"YES\n"<<i+1<<" "<<i+2<<"\n";
                flag=true;
                break;
            }
        }
        if (flag==false) cout<<"NO\n";
    }
}
