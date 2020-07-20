# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int s,i,sum=0,d;
    cin>>s;
    int a[s];
    for (i=0;i<s;i++)
    {
        cin>>a[i];
        d=a[i];
        d=d+sum;
        sum=max(d,sum);
        cout<<d<<" ";
    }
    cout<<"\n";

}
