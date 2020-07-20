# include <stdio.h>
int main ()
{
    int a,b,d,s;
    scanf ("%d %d",&a,&b);
    s=a;
    while (1)
    {
        d=a/b;
        a=d+(a%b);
        s=s+d;
        if (a<b) break;
    }
    printf ("%d\n",s);
    return 0;
}
