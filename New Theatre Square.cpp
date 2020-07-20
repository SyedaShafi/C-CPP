# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,i,j,one=0,two=0,ans;
        cin>>n>>m>>x>>y;
        char a[n][m];
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }


        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                if (a[i][j]=='.' && a[i][j+1]=='.' && j+1<m)
                {
                    two++;
                    j++;
                }

                else if (a[i][j]=='.') one++;
            }
        }

        if ((x*2)>y)
        {
            ans=(two*y)+(x*one);
        }

        else
        {
            two=two*2;
            ans=(two+one)*x;
        }
        cout<<ans<<"\n";
    }
}
