# include <stdio.h>
int main ()
{
    int a1[4],max=0,a,b,c,i,k,temp,A,B,C,D;
    for (i=0;i<4;i++)
    scanf ("%d",&a1[i]);

    for (i=0;i<4;i++)
    {
        for (k=i+1;k<4;k++)
        {
            if (a1[i]>a1[k])
            {
                temp=a1[i];
                a1[i]=a1[k];
                a1[k]=temp;
            }
        }
    }
    A=a1[3];//a+b+c
    B=a1[2];//a+b
    C=a1[1];//b+c
    D=a1[0];//c+a


    a=a1[3]-C;
    b=a1[2]-a;
    c=a1[0]-a;

    printf ("%d %d %d\n",a,b,c);
    return 0;
}
