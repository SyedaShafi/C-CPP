# include <iostream>
# include <cmath>
using namespace std;
int main ()
{
  int t,i;
  cin>>t;
  for (i=1;i<=t;i++)
  {
     int a, b,fd,ans;
     cin>>a>>b;
     fd=abs(a-b);
     ans=(4*fd)+19+(a*4);
     cout<<"Case "<<i<<": "<<ans<<endl;
  }
}
