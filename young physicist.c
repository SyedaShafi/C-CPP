# include <stdio.h>
int main ()
{
    int n,i,j,sum=0,d=0;
    scanf("%d",&n);
    int a[n][3];
    for (i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf ("%d",&a[i][j]);

        }
    }
    for (j=0;j<3;j++)
    {
        for (i=0;i<n;i++)
        {
            sum=sum+a[i][j];

        }
        if (sum!=0)
            {
                d++;
            }
        sum=0;
    }
    if (d==0)
        printf("YES\n");
    else
     printf ("NO\n");
     return 0;

}
