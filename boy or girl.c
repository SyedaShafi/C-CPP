# include <stdio.h>
# include <string.h>
int main ()
{
    char s1[101];
    scanf ("%s",s1);
    int len,i,a[27]={0},count=0;
    len=strlen(s1);
    for (i=0;i<len;i++)
    {
      a[s1[i]-97]++;
    }
    for (i=0;i<27;i++)
    {
       if (a[i]==1)
        count++;
       else if (a[i]>1)
        count++;
    }
    if (count%2==0)
        printf ("CHAT WITH HER!\n");
    else printf ("IGNORE HIM!\n");
    return 0;
}
