# include <stdio.h>
# include <math.h>
int main ()
{
    int t,a,b,d,r1,r2,result;
    scanf ("%d",&t);
    while (t--)
    {
     result=0;
     d=0;
     scanf ("%d %d",&a,&b);
     d=abs(a-b);
     r1=d%5;
     r2=r1%2;

     result=(d/5)+(r1/2)+r2;
     printf ("%d\n",result);
    }
   return 0;
}
