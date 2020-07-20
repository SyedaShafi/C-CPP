# include <stdio.h>
int main ()
{
    char s1[1000],s2[1000];
    int a[1000],len, i,j;
    scanf ("%s %s",s1,s2);
    len=strlen(s1);
    j=0;
    for (i=0; i<len; i++)
    {
        if (s1[i]!=s2[i])
        {
            a[j]=1;
            j++;
        }
        else if (s1[i]==s2[i])
        {
            a[j]=0;
            j++;
        }
    }
    for (i=0; i<j; i++)
    {
        printf ("%d",a[i]);
    }
    printf ("\n");
    return 0;
}
