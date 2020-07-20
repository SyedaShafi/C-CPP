#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,i,cnt;
    int *d1,*d2;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for (i=1;i<n;i++)
    {
        d1=max_element(a,(a+i+1));
        d2=min_element(a,(a+i+1));
        if(*d1==a[i] || *d2==a[i])
        {
            cnt=count(a,a+i+1,a[i]);
            if (cnt==1) c++;
        }
    }

    cout<<c<<endl;
}
