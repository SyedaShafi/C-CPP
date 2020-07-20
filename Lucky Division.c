# include <stdio.h>
int main ()
{
    char s1[1000];
    int i,len,count=0,n;
    gets (s1);
    len=strlen(s1);
    for (i=0; i<len; i++)
    {
        if (s1[i]=='4')
            count++;
        if (s1[i]=='7')
            count++;
    }
    if (len==count) printf ("YES\n");

    else
    {
        n=atoi(s1);
        if (n%4==0 || n%47==0 || n%7==0)
            printf ("YES");
        else
            printf ("NO\n");
    }
    return 0;
}
