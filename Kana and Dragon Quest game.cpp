# include <bits/stdc++.h>
using namespace std ;
int abs(int h)
{
    return ((h/2)+10);
}
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,n,m,i;
        cin>>x>>n>>m;
        for (i=1; i<=n; i++)
        {
            if (x>20)
                x=abs(x);
            /* cout<<x<<endl;*/
        }
        x=x-(m*10);

        if (x>0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}
