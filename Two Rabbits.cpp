# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int x,y,a,b,d,total,r,i;
        cin>>x>>y>>a>>b;
        d=y-x;
        total=a+b;
        r=d%total;
        if (r==0) i=d/total;
        else i=-1;
        cout<<i<<endl;
    }
}
