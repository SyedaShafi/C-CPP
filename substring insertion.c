# include <stdio.h>
int main ()
{
    char a[25],b[15];
    int index,i,l1,l2;
    printf ("Enter the string\n");
    scanf ("%s",a);
    printf ("Enter the substring\n");
    scanf ("%s",b);
    printf ("enter the index\n");
    scanf ("%d",&index);
    l1=strlen(a);
    l2=strlen(b);
    if (index>l2)
    {
        printf ("Invalid index\n");
    }
    else {
    for (i=l1;i>=index;i--)
    {
        a[i+l2]=a[i];
    }

    for (i=0;i<l2;i++)
    {
        a[i+index]=b[i];
    }
    printf ("%s",a);
    }
}
