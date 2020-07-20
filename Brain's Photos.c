# include <stdio.h>
int main ()
{
    int n,m,i,j,count=0,s=' ';
    scanf ("%d",&n);
    scanf ("%d",&m);
    char a[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%s",&a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (a[i][j]=='C') count++;
            else if (a[i][j]=='M') count++;
            else if (a[i][j]=='Y') count++;
        }
    }
    if (count==0) printf ("#Black&White\n");
    else printf ("#Color\n");
    return 0;
}
