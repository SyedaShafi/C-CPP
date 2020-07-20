# include <stdio.h>
int main ()
{
    int n,i,p,q,count=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if ((p+2)<=q) count++;
    }
    if (count>=0) printf ("%d\n",count);
    return 0;
}
