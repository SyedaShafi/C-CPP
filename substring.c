# include <stdio.h>
# include <string.h>
int indexofsubstring (char str[],char s[])
{
    int i,j,k,l;
    l=strlen(s);
    for(i=0; str[i]!='\0'; i++)
    {
        k=i;
        for (j=0; j<l; j++)
        {
            if (str[k]!=s[j])
                break;
            k++;
        }
        if (j==l)
        {
            return (i);
        }
    }
    return (-1);
}
int main ()
{
    int index;
    index=indexofsubstring("abababbbaabbababbbaa","bbaa");
    if (index==-1)
        printf ("Substring not found\n");
    else
        printf ("Substring found at index %d\n",index);
}
