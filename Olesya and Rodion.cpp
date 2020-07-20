#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,t,i;
    cin>>n>>t;
    if (t==10&&n==1) cout<<-1<<endl;
    else if (t==10)
    {
        for (i=1;i<=n;i++)
           {
              if(i==n) cout<<0;
              else cout<<1;
           }
    }
    else{
        for (i=1;i<=n;i++)
            cout<<t;
    }
     cout<<"\n";
}
