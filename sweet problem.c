# include <stdio.h>
# include <string.h>
int main ()
{
    char s1[1000];
    int j,t,i,len;
    scanf ("%d",&t);
    for (j=0;j<=t;j++)
    {
        gets(s1);
        len=strlen(s1);
        i=len-1;
        if (s1[i]=='o' && s1[i-1]=='p')
            printf ("FILIPINO\n");
        else if (s1[i]=='u' && s1[i-1]=='s' && s1[i-2]=='e' && s1[i-3]=='d')
            printf ("JAPANESE\n");
        else if (s1[i]=='u' && s1[i-1]=='s' && s1[i-2]=='a' && s1[i-3]=='m')
            printf ("JAPANESE\n");
        else if (s1[i]=='a' && s1[i-1]=='d' && s1[i-2]=='i' && s1[i-3]=='n' && s1[i-4]=='m')
            printf ("KOREAN\n");

            i=0;
    }
    return 0;
}
