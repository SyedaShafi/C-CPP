# include <stdio.h>
# include <math.h>
int main ()
{
    int t,i,n,x,a,b,d;
    scanf ("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf ("%d %d %d %d",&n,&x,&a,&b);
        if ((abs(a-b))<n-1) d=(abs(a-b))+x;
        else d=abs(a-b);
        if (d>=n) printf ("%d\n",n-1);
        else printf ("%d\n",d);
    }
}
