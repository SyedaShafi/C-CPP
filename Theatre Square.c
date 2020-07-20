# include <stdio.h>
int main ()
{
    long long int n,m,a,r1,r2;
    scanf ("%lld %lld %lld",&n,&m,&a);
    if (n%a==0) r1=n/a;
    else if (n%a!=0)r1=n/a+1;
    if (m%a==0)r2=m/a;
    else if (m%a!=0)r2=m/a+1;
    printf ("%lld\n",r1*r2);
    return 0;
}
