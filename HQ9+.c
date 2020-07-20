# include <stdio.h>
int main ()
{
    char s1[1000];
    scanf ("%s",s1);
    int i,count=0,len;
    len=strlen(s1);
    for (i=0;i<len;i++)
    {
        if (s1[i]=='H'||s1[i]=='Q'||s1[i]=='9')
        {
            count++;
        }
    }
    if (count==0) printf ("NO\n");
    else printf ("YES\n");
    return 0;
}
