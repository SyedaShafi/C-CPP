# include <stdio.h>
int main ()
{
    int n,m,d;
    scanf ("%d %d",&n,&m);
    if (n<=m) d=n;
    else d=m;
    if (d%2==0) printf ("Malvika\n");
    else printf ("Akshat\n");
    return 0;
}
