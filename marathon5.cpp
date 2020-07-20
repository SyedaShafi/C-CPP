# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
    int n,m=10000,j,d,k=0;
    cin>>n;
    int a[n],i;
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
               {
                d=abs(i-j);
                m=min(m,d);
               }
        }
    }
    if (m<10000 && m>0) cout<<m<<endl;
    else cout<<"-1"<<endl;

}
