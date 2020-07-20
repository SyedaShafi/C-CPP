# include <bits/stdc++.h>
using namespace std;
int power(int b,int p)
{
    if(p==0) return 1;
    int smallans=power(b,p-1);
    return b*smallans;
}
int main()
{
    int b,p;
    cin>>b>>p;
    cout<<power(b,p)<<endl;
}
