# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x,i,j,odd=0,even=0,f=0;
        cin>>n>>x;
        int a[n];
        for (j=0; j<n; j++)
        {
            cin>>a[j];
            if (a[j]%2==0) even++;
            else odd++;
        }

        i=1;
        while(i<=x)
        {
            if (i<=odd && x-i<=even)
            {
                f++;
                cout<<"YES\n";
                break;
            }

            else if (i==x && odd>=i)
            {
                f++;
                cout<<"YES\n";
                break;
            }

            else i+=2;
        }
       if (odd==0) cout<<"NO\n";
       else if (i>x && f==0) cout<<"NO\n";

    }
}
