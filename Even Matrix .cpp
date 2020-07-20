# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,i,j;
        cin>>n;
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                x=j;
                y=i;
                if (x>y)
                {
                    if (x%2!=0)
                    {
                        cout<<x*x-y+1;
                    }
                    else {
                        x--;
                        cout<<x*x+y;
                    }

                    cout<<" ";
                }

                else {
                    if (y%2==0)
                    {
                        cout<<y*y-x+1;
                    }

                    else {
                        y--;
                        cout<<y*y+x;
                    }

                    cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
}

