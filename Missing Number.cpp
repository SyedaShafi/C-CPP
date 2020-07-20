# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,def;
    cin>>n;
    int a[n];
    int d=n-1;
    for (i=0;i<d;i++)
        cin>>a[i];
    if(n==2)
    {
        if (a[0]==1) cout<<2<<endl;
        else cout<<1<<endl;
    }
    else {
    sort(a,a+d);
    for (i=0;i+1<d;i++)
    {
       def=a[i+1]-a[i] ;
       if (def>1){
         cout<<a[i]+1;
         break;
       }
    }

    if(def==1)
        cout<<a[d-1]+1;
    cout<<endl;
    }
}
