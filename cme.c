#include <stdio.h>
int main ()
{
    int q,n;
    scanf ("%d",&q);
    while(q--)
    {
       scanf ("%d",&n);
       if (n==2) printf ("2\n");
       else if ((n%2)==0) printf ("0\n");
       else if ((n%2)!=0) printf ("1\n");
    }
    return 0;
}
