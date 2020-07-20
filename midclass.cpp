# include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,n,x,sum=0,i,nx,a[100002],ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        sum=0;
        for (i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        nx=n*x;
        if(nx<=sum) cout<<n<<"\n";
        else {
                ans=abs(nx-sum)-abs(n-x);
                cout<<ans<<"\n";
        }
    }

}

