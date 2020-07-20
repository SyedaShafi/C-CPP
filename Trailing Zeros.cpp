# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll n,c=0,i;
    cin>>n;
    for (i=5;n/i>=1;i*=5)
        c+=n/i;
    cout<<c<<"\n";
}
