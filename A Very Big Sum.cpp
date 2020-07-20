# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    int n;
    cin>>n;
    ll a[n],sum=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum<<"\n";
}
