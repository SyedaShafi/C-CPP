# include <stdio.h>
int main ()
{
    int x,rem;
    scanf ("%d",&x);
    rem=x%4;
    if (rem==1) printf ("0 A\n");
    else if (rem==2) printf ("1 B\n");
    else if (rem==3) printf ("2 A\n");
    else if (rem==0) printf ("1 A\n");
    return 0;
}
