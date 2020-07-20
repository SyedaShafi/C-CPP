# include <stdio.h>
int main ()
{
    int i,a[1000],n,temp,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++) scanf ("%d",&a[i]);

    for (i=0;i<n;i++) //3 2 1 2
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

     for (i=0;i<n;i++) printf ("%d ",a[i]);
     return 0;
}
