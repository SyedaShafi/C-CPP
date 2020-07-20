# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,deff,m,d;
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++) cin>>arr[i];
    for (i=0; i<n; i++)
    {
        d=arr[i]/5;
        m=(d+1)*5;
        deff=m-arr[i];
        if (deff<3&&m>=38)
        {
            cout<<m<<"\n";
        }
        else cout<<arr[i]<<"\n";
    }
}

