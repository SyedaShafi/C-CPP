# include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mn=INT_MAX,d,i;
        cin>>n;
        int a[n];
        for (i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for (i=0;i+1<n;i++)
        {
            d=a[i+1]-a[i];
            mn=min(mn,d);
        }

        cout<<mn<<endl;
    }
}
