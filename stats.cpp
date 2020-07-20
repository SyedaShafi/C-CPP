# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,i,p,c,cont=1,def1,def2,x=0,y=0;
       cin>>n;
       for (i=0;i<n;i++)
       {
           cin>>p>>c;
           def1=p-x;
           def2=c-y;
           if (def1<def2) cont=0;
           if(def1<0 || def2<0) cont=0;
           x=p;
           y=c;
       }
       if (cont) cout<<"YES\n";
       else cout<<"NO\n";
    }
}
