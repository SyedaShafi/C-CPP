# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
    long long int a,b,c,m,len,d;
    cin>>a>>b>>c;
    m=min(a,b);
    d=abs(a-b);
    if (d>1) len=c*2+m*2+1;
    else len=c*2+a+b;
    cout<<len<<endl;
}
