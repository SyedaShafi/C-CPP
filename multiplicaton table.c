# include <stdio.h>
int main ()
{
    long long int n,x,i,j,count=0;
    scanf ("%lld %lld",&n,&x);
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++)
        {
          if (i*j==x)
          {
              count++;
          }
        }
    }
    if (x==1) printf ("1\n");
    else printf ("%lld\n",count*2);
    return 0;
}
