# include <stdio.h>
int main ()
{
    int n,i,count=0,a,b;
    scanf ("%d",&n);
    for (i=0;i<n;i++){
         scanf ("%d %d",&a,&b);
         if ((i+1)%2!=0 && a<b) count++;
         if ((i+1)%2==0 && a>b) count++;
    }
    if (count==n) printf ("Happy Alex\n");
    else printf ("Poor Alex\n");
}
