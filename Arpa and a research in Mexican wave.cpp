# include <iostream>
using namespace std;
int main ()
{
    int n,k,t,d;
    cin >>n>>k>>t;
    if (t<=k) cout<<t<<endl;
    else if (t>k&&t<=n) cout <<k<<endl;
    else if (t>n)
    {
        d=t-n;
        cout <<k-d;
    }
}

