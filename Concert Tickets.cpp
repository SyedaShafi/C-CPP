#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,m,i,j,a=0;
    cin>>n>>m;

    ll an[n],am[m],arr[n]= {0};

    for (i=0; i<n; i++)
        cin>>an[i];
    for (j=0; j<m; j++)
        cin>>am[j];
    sort(an,an+n);
    i=0;
    j=n-1;

    while(i<m && j<n)
    {
        if (am[i]>=an[j] && arr[j]==0)
        {
            cout<<an[j]<<"\n";
            i++;
            arr[j]=1;
            j=n-1;
        }

        else
        {
            j--;
        }
    }
}
