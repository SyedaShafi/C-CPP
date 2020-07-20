# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c,ans;
        cin>>n;
        ans=n;
        int a[n],i,j;
        for (i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for (i=0; i+1<n; i++)
        {
            if (a[i]==a[i+1])
            {
                ans--;
            }
        }
        cout<<ans<<"\n";
    }
}
