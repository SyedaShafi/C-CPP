# include <iostream>
using namespace std;
int main ()
{
    int n,t,i,j;
    cin>>n>>t;
    string a,b;
    cin>>a;
    b=a;
    for (j=1;j<=t;j++)
    {
        for (i=0;i<n;i++)
        {
            if (a[i]=='B'&&a[i+1]=='G')
            {
               swap(b[i],b[i+1]);
            }
        }
        a=b;
    }
    cout<<b<<endl;
}
