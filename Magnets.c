# include <stdio.h>
int main ()
{
    int n,i;
    scanf ("%d",&n);
    int a[n],count=0;
    for (i=0; i<n; i++)
        scanf ("%d",&a[i]);
    for (i=0; i<n-1; i++)
    {
        if (a[i]!=a[i+1])
            count++;
    }
    printf ("%d\n",count+1);
    return 0;
}
