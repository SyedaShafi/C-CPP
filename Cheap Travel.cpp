# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,a,b,tk=0;
    cin>>n>>m>>a>>b;
    if ((m*a)>b) tk=n*(b/m);
    else tk=n*a;
    cout<<tk<<endl;
}
