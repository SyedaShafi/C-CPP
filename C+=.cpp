# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll a,b,n,flag=0;
    cin>>a>>b>>n;

    while(b<=n && a<=n)
    {
        if (a>b)
        {
            flag++;
            b+=a;
        }

        else{
            flag++;
            a+=b;
        }
    }
    cout<<flag<<"\n";
    }
}
