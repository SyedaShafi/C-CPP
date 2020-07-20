# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,k,i,j;
    cin>>n;
    m=n;
    for (i=0;i<n;i++)
    {
        m--;
        for (j=0; j<m; j++)
            cout<<" ";
        for (k=j;k<n; k++)
            cout<<"#";
        cout<<"\n";
    }

}
