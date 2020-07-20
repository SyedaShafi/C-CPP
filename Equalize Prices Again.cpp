# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,j,sum=0,s;
        cin>>n;
        int a[n+2];
        for (i=0;i<n;i++) cin>>a[i];
        for (i=0;i<n;i++)
            sum=sum+a[i];
            j=1;
        while (1)
        {
            s=n*j;
            if (s>=sum) break;
            j++;
        }
        cout<<j<<endl;
    }
}
