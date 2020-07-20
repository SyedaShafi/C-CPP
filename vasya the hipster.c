# include <stdio.h>
# include <math.h>
int main ()
{
    int a,b,d,m;
    scanf ("%d %d",&a,&b);
    d=abs(a-b);
    if (a<b)
        printf ("%d ",a);
    else
    printf ("%d ",b);
    m=d/2;
    printf ("%d\n",m);
    return 0;
}
