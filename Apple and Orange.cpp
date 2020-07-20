# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int s,t,a,b,m,n,c1=0,c2=0,i;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int app[m],org[n];
    for (i=0;i<m;i++)
    {
        cin>>app[i];
        app[i]=a+app[i];
        if (app[i]>=s && app[i]<=t) c1++;
    }
    for (i=0;i<n;i++)
    {
        cin>>org[i];
        org[i]=b+org[i];
        if (org[i]>=s && org[i]<=t) c2++;
    }
    cout<<c1<<"\n"<<c2<<"\n";
}
