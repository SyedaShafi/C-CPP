#include <stdio.h>
int main ()
{
    int arr[]={1,2,3,4,5};
    int n=5,i,ele,loc;
    printf ("Enter the element what to insert\n");
    scanf ("%d",&ele);
    printf ("enter the position\n");
    scanf ("%d",&loc);
    for (i=n;i>loc;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[loc]=ele;
    for (i=0;i<=n;i++)
     printf ("%d ",arr[i]);
    return 0;
}
