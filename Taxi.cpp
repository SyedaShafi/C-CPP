#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,ans=0,n1,n2,n3,n4;
    cin>>n;
    int a[n];
    for (i=0; i<n; i++)
        cin>>a[i];
    n1=count(a,a+n,1);
    n2=count(a,a+n,2);
    n3=count(a,a+n,3);
    n4=count(a,a+n,4);

    ans=n4;
    if (n1>=n3)
    {
        ans=ans+n3;
        n1=n1-n3;
        n2=n2*2+n1;
        ans=ans+(n2/4);
        if((n2%4)) ans++;
    }


    else if (n1<n3)
    {
        ans=ans+n1;
        n3=n3-n1;
        ans=ans+n3;
        n2=n2*2;
        ans=ans+((n2/4));
        if ((n2%4)) ans++;
    }
    cout<<ans<<endl;
}
