#include <stdio.h>
int main ()
{
    char s1[1000000];
    long long int i,len,count=0;
    gets(s1);
    len=strlen(s1);
    for (i=0;i<len;i++)
    {
        if (s1[i]=='4') count++;
        if (s1[i]=='7') count++;
    }
    if (count==4 || count==7) printf ("YES\n");
    else printf ("NO\n");
    return 0;
}
