# include <stdio.h>
int main ()
{
    int a[5],i,pos;
    scanf("%d",&pos);
    for (i=0;i<5;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=pos;i<5-1;i++)
    {
        a[i]=a[i+1];
    }
    for (i=0;i<4;i++) printf ("%d\n",a[i]);
}
