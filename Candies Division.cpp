# include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,rem,m;
        cin >>n>>k;

        rem=n%k;
        m=k/2;
        if (rem==0 || rem<=m) cout<<n<<endl;
        else if (rem>m)
        {
            rem=rem-m;
            cout <<n-rem<<endl;
        }
    }
}
