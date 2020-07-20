# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,sum=0,product=1,cont=0;
        cin >> n;
        int a[n];
        for (i=0; i<n; i++)
            cin >> a[i];
        for (i=0; i<n; i++)
            product = product*a[i];
        if (product==0)
        {
            for (i=0; i<n; i++)
            {
                if (a[i]==0)
                {
                    a[i]=1;
                    cont++;
                }
            }
        }
        for (i=0; i<n; i++)
            sum=sum+a[i];
        if(sum==0)
        {
            cont++;
        }
        cout <<cont<<endl;
    }
}
