# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,w,c=1;
        cin>>n>>m;
        cout<<"W";
        for (i=2;i<=n*m;i++)
        {
            c++;
           cout<<"B";
           if(c==m)
           {
               cout<<"\n";
               c=0;
           }
        }
    }
}
