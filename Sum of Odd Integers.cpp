# include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if (k*k>n) cout<<"NO"<<endl;
        else if (n%2!=k%2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
