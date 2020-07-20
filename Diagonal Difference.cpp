# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum1=0,sum2=0,ans;
    cin>>n;
    int a[n][n];
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for (i=0; i<n; i++) sum1=sum1+a[i][i];
    cout<<sum1<<endl;
    j=n-1;
    for (i=0; i<n; i++)
    {
        sum2=sum2+a[i][j];
        j--;
    }
    cout<<sum2<<endl;
    ans=abs(sum1-sum2);
    cout<<ans<<"\n";

}
