# include <stdio.h>
int fibonacci(int count)
{
    int f,f1=1,f2=1;
    f=(count<3)?1:(f1+f2);
    f2=f1;
    f1=f;
    return (f);
}
int main ()
{
    int count,n;
    printf ("Enter N=");
    scanf ("%d",&n);
    for (count=1;count<=n;++count)
    {
      printf ("%d\n",fibonacci(count));
    }
}
