# include<bits/stdc++.h>
using namespace std;
int divisor(int n)
{
    int i;
    for (i=3; i<=sqrt(n); i+=2)
        if (n%i==0) return i;
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d,ans=0;
        cin>>n>>k;
        if (n%2!=0)
        {
            d=divisor(n);
            ans=n+2*(k-1)+d;
        }
        else {
            ans=n+2*k;
        }
        cout<<ans<<"\n";
    }

}
