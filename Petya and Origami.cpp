# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
    long long int n,k,r,g,total,b;
    cin >>n>>k;
    r=2*n;
    g=5*n;
    b=8*n;
    r=ceil((float)r/k);
    g=ceil((float)g/k);
    b=ceil((float)b/k);
    total=(r+g+b);
    cout<<total<<endl;

}
