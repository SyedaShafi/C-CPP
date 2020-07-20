# include <stdio.h>
int main ()
{
    char a[25];
    int index,num,l,i;
    printf ("Enter the string\n");
    scanf("%s",a);
    l=strlen(a);
    printf ("Enter the index and number of character to delete\n ");
    scanf ("%d%d",&index,&num);
    for (i=index+num;i<=l;i++)
    {
        a[i-num]=a[i];
    }
    printf ("%s",a);
    return 0;
}
