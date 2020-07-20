# include <iostream>
using namespace std;
int main ()
{
    int n,m,k,s;
    cin>>n>>m>>k;
    s=min(m,k);
    if (s>=n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
