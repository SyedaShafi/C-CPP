# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c=0,i,def,ans;
        cin>>n;
        for (i=0; i<n; i++)
        {
            cin>>a;
            if (i>0 && a==b)
            {
                c++;
            }
            b=a;
        }
        def=n-c;
        if (def>1) ans=min(def,c)+1;
        else if (def==1)  ans=min(def,c);
        else if (def==0) ans=c;
        cout<<ans<<"\n";
    }
}
