# include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll i,a[n],sum=0;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<(sum%4)<<endl;
}
