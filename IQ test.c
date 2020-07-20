# include <stdio.h>
int main ()
{
    int n,i,a[1000],count1=0,count2=0,d1,d2;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
      scanf ("%d",&a[i]);
    }
    for (i=0;i<n;i++);
    {
      if (a[i]%2==0) count1++;
      else d1=i;
      if (a[i]%2!=0) count2++;
      else d2=i;
    }
    if (count1==0) printf ("%d\n",d1);
    if (count2==0) printf ("%d\n",d2);
    return 0;
}
