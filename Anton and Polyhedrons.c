# include <stdio.h>
# include <string.h>
int main ()
{
    int i,n,count=0;
    scanf ("%d",&n);
    char s1[n][100];
    for (i=0;i<n;i++)
    {
      scanf ("%s",s1[i]);
    }
    for (i=0;i<n;i++)
    {
        if (strcmp(s1[i],"Tetrahedron")==0) count=count+4;
        else if (strcmp(s1[i],"Cube")==0) count=count+6;
        else if (strcmp(s1[i],"Octahedron")==0) count=count+8;
        else if (strcmp(s1[i],"Dodecahedron")==0) count=count+12;
        else if (strcmp(s1[i],"Icosahedron")==0) count=count+20;
    }
    printf ("%d\n",count);
}
