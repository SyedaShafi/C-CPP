#include<stdio.h>
#include <string.h>
int main()
{
    char s[100][100],na[100],str[100];
    int n,i,taka,num,j,k,mod;
    while(scanf("%d",&n)!=EOF)
    {
        int arr[100]= {0};
        for(i=0; i<n; i++)
            scanf("%s",s[i]);
        for(i=0; i<n; i++)
        {
            scanf("%s%d%d",na,&taka,&num);
            if(num==0)
                mod=0;
            else
                mod=taka%num;

            for(j=0; j<n; j++)
            {
                if(strcmp(na,s[j])==0)
                {
                    arr[j]=arr[j]-taka+mod;
                    break;
                }
            }
            for(j=0; j<num; j++)
            {
                scanf("%s",str);
                for(k=0; k<n; k++)
                {
                    if(strcmp(str,s[k])==0)
                    {
                        arr[k]=arr[k]+(taka/num);
                        break;
                    }

                }

            }

        }
        for(j=0; j<n; j++)
        {
            printf("%s %d\n",s[j],arr[j]);
        }
        printf("\n");

    }
    return 0;
}
