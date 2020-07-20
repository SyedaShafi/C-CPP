# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,m,k,i,j,ans=0;
    cin>>n>>m>>k;
    ll an[n],am[m];
    for (i=0;i<n;i++) cin>>an[i];


    sort(an,an+n);

    for (i=0;i<m;i++) cin>>am[i];


    sort(am,am+m);
    i=0;
    j=0;
    while(i<n && j<m)
    {
        if (abs(an[i]-am[j])<=k)
        {
            ans++;
            i++;
            j++;
        }

        else if(am[j]<an[i])
        {
            j++;
        }

        else {
            i++;
        }
    }
    cout<<ans<<"\n";
}
