# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,cont=0,j;
        cin>>n;
        int a[n+2],b[n+2];
        for (i=0;i<n;i++)
        {
           cin>> a[i];
        }
        for (j=0;j<n;j++)
        {
           cin>> b[j];
        }

        for (i=0,j=0;i<n;i++,j++)
        {
            if ( a[i]<=b[j] ) cont++;
            else {
                cont=-1;
                break;
            }
        }
        if (cont==-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
