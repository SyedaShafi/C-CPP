# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,cont=0;
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++) cin >>arr[i];
        for (i=0;i<n;i++)
        {
            if (arr[i]%2!=0)
                cont++;
        }
        if (cont==0 || (cont==n && n%2==0)) cout <<"NO"<<endl;
        else cout <<"YES"<<endl;

    }
}
