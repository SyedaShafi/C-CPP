# include <stdio.h>
int main ()
{
    char s[100];
    gets(s);
    int i,len,a=0,x;
    len=strlen(s);
    for (i=0;i<len;i++)
    {
        if (s[i]=='a') a++;
    }
    x=len-a;
    if (x>=a) printf ("%d\n",(a+(a-1)));
    if (x<a) printf ("%d\n",len);
    return 0;
}
