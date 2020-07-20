# include <iostream>
using namespace std;
int main ()
{
    long long int n,rem,sum=0;
    cin>>n;
    rem=n%100;
    n=n/100;
    sum=sum+n;
    if (rem>=20)
    {
        n=rem/20;
        rem=rem%20;
        sum=sum+n;
    }
    if (rem>=10)
    {
        n=rem/10;
        rem=rem%10;
        sum=sum+n;
    }
    if (rem>=5)
    {
        n=rem/5;
        rem=rem%5;
        sum=sum+n;
    }
    if(rem<5)
        sum=sum+rem;

    cout<<sum<<endl;
    return 0;
}
