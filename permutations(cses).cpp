# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll n,i;
    //string str="";
    cin>>n;
    if (n<=3 && n!=1)
    {
       cout<<"NO SOLUTION\n";
       return 0;
    }
    for (i=2;i<=n;i+=2)
    {
            cout<<i<<" ";
    }
    for (i=1;i<=n;i+=2)
    {
            cout<<i<<" ";
    }

    cout<<"\n";
}
