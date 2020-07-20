# include <stdio.h>

int max=50;

int arr[51];

void sieve()
{
    int i,j;
    for (i=2;i*i<=max;i++)
    {
        if (arr[i]==0)
        {
            for (j=i*i;j<=max;j+=i)
            {
                arr[j]=1;
            }
        }

    }
}
int main ()
{
    sieve();
    int i;
    for (i=2;i<=max;i++)
    {
        if (arr[i]==0) printf ("%d\n",i);
    }
    return 0;
}
