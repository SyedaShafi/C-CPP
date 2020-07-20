# include <stdio.h>
int main ()
{
    int n,sum=0,i,d,max=0;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    for (i=0;i<n;i++)
    {
        d=max-a[i];
        sum=sum+d;
        d=0;
    }
    printf ("%d\n",sum);
    return 0;
}
