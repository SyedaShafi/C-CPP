# include <stdio.h>
int main ()
{
    int *p,i=100;
    p=&i;
    printf ("%d\n",i);
    printf ("%u\n",&i);
    printf ("%u\n",p);
    printf ("%u\n",&p);
    printf ("%d\n",*p);
    printf ("%d\n",*(&i));
}
