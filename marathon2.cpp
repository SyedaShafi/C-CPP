# include <iostream>
using namespace std;
int main ()
{
    int b,n,m,i,j,k=0,ma1=-1;
    cin>>b>>n>>m;
    int a1[n],a2[m],a3[n*m];
    for (i=0;i<n;i++)
        cin>>a1[i];
    for (i=0;i<m;i++)
        cin>>a2[i];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            a3[k]=a1[i]+a2[j];
            k++;
        }
    }
    for (k=0;k<n*m;k++)
    {
        if (a3[k]<=b)
        {
            ma1=max(ma1,a3[k]);
        }
    }
   cout<<ma1<<endl;

}
