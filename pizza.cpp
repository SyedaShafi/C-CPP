# include <iostream>
using namespace std;
int main ()
{
    long long int n,t;
    cin>>n;
    t=n+1;
    if (n==0) cout <<"0"<<endl;
    else if (t%2==0) cout<<t/2<<endl;
    else cout<<t<<endl;
}
