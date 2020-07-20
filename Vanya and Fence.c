# include <stdio.h>
int main ()
{
    int n,h,i,a[1000],result=0;
    scanf("%d %d",&n,&h);
    for (i=0;i<n;i++) scanf ("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        if (a[i]<=h) result=result+1;
        if (a[i]>h) result=result+2;
    }
    printf ("%d\n",result);
    return 0;
}
