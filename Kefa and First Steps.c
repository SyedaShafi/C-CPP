# include <stdio.h>
int main ()
{
    int n,i,count=0,max=0,j=0;
    scanf ("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
        scanf ("%d",&a[i]);
    for (i=0; i<n-1; i++)
    {
            if (a[i]<=a[i+1]) count++;
            else count=0;
            if (count>max) max=count;
    }
    printf ("%d\n",max+1);
    return 0;
}
