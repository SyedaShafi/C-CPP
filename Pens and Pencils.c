# include <stdio.h>
int main ()
{
    int t,i;
    scanf ("%d",&t);
    for (i=0; i<t; i++)
    {
        int a,b,c,d,k,count1=0,count2=0,rem1,rem2;
        scanf ("%d %d %d %d %d",&a,&b,&c,&d,&k);
        rem1=a%c;
        count1=a/c;
        if (rem1>0) count1=count1+1;
        rem2=b%d;
        count2=b/d;
        if (rem2>0) count2=count2+1;


        if (count1+count2<=k) printf ("%d %d\n",count1,count2);
        else printf ("-1\n");

    }
    return 0;
}
