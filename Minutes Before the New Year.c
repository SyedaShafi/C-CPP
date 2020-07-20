# include <stdio.h>
int main ()
{
    int i,t;
    scanf ("%d",&t);
    for (i=0;i<t;i++)
    {
        int h,m,r;
      scanf ("%d %d",&h,&m);
      r=1440-((h*60)+m) ;
      printf ("%d\n",r);
    }
    return 0;
}
