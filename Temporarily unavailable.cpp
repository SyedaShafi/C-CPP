# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,r,mx,mi,d,lp,rp;
        cin>>a>>b>>c>>r;
        mx=max(a,b);
        mi=min(a,b);
        lp=max(mi,c-r);
        rp=min(mx,c+r);
        d=rp-lp;
        if (d>=0)
        cout<<mx-mi-d<<endl;
        else cout<<mx-mi<<endl;
    }
}
