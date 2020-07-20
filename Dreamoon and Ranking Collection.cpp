# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,r,i,c,f;
        cin>>n>>x;
        bool a[n+x];
        for (i=1;i<=n+x;i++) a[i]=false;
        for (i=1;i<=n;i++)
        {
            cin>>r;
            a[r]=true;
        }
        for (f=n+x;f>0;f--)
        {
            c=0;
            for (i=1;i<=f;i++)
            {
                if (!a[i]) c++;
            }
            if (c==x)
            {
                cout<<f<<endl;
                break;
            }
        }
    }
}
