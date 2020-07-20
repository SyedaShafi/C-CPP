# include <stdio.h>
int main ()
{
    int n,len,c1=0,c2=0,i;
    scanf ("%d",&n);
    char s1[n];
    scanf ("%s",s1);
    len=strlen(s1);
    for (i=0; i<len; i++)
    {
        if (s1[i]=='A')
        {
            c1++;
        }
        else if (s1[i]=='D')
        {
            c2++;
        }
    }
    if (c1>c2)
        printf ("Anton\n");
    else if (c1==c2)
        printf ("Friendship\n");
    else
        printf ("Danik\n");

}
