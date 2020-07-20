# include <bits/stdc++.h>
typedef long long ll;
using namespace std ;
int main ()
{
    ll n,m,i;
    cin>>n>>m;
    ll a[m];
    for (i=0;i<m;i++) cin>>a[i];
    ll pos=1,time=0;
    for (i=0;i<m;i++)
    {
        if (a[i]>=pos)
        {
            time=time+(a[i]-pos);
            pos=a[i];
        }

        else if(a[i]<pos)
        {
            time=time+(n-pos+a[i]);
            pos=a[i];
        }
    }
    cout<<time<<endl;
}
