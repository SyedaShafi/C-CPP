# include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,s,x,rem,y=0,sum;
        cin >>a>>b>>n>>s;
        x=min(s/n,a);
        s=s-(x*n);
        if (s<=b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
