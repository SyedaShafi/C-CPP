# include <stdio.h>
int main ()
{
    int n,com=0,coc=0,m,c,i;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d %d",&m,&c);
        if (m>c) com++;
        if (c>m) coc++;
    }
    if (com>coc) printf ("Mishka\n");
    else if (coc>com) printf ("Chris\n");
    else if (com==coc) printf ("Friendship is magic!^^\n");
    return 0;
}
