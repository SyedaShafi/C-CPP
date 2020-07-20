# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0,c,r,col=0,row=0,i,j;
        cin>>n>>m;
        int a[n][m];
        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }

        for (i=0; i<n; i++)
        {
            c=0;
            for (j=0; j<m; j++)
            {
               if (a[i][j]==1)
               {
                   continue;
               }

               else {
                c++;
                if (c==m) row++;
               }
            }
        }

        for (i=0;i<m;i++)
        {
            r=0;
            for (j=0;j<n;j++)
            {
                if (a[j][i]==1)
                {
                    continue;
                }

                else {
                    r++;
                    if (r==n) col++;
                }
            }
        }
        ans=min(col,row);
        if (ans%2!=0) cout<<"Ashish\n";
        else cout<<"Vivek\n";
    }
}
