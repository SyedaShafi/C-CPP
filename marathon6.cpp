# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
    long long int n,m,t,x,ans;
    cin>>t;
    for (x=1; x<=t; x++)
    {
        cin>>n>>m;
        n=n/2;
        ans=n*m;
        cout<<"Case "<<x<<": "<<ans<<endl;
    }
}

