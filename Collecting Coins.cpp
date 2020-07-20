# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,n,greatest,sum,d1,d2,d3,deff;
        cin>>a>>b>>c>>n;
        if (a>b && a>c)
        greatest=a;
        else if (b>c)
            greatest=b;
        else greatest=c;
        d1=greatest-a;
        d2=greatest-b;
        d3=greatest-c;
        sum=d1+d2+d3;
        deff=n-sum;
        if (deff<0 || deff%3!=0 ) cout <<"NO"<<endl;
        if (deff>=0 && deff%3==0) cout <<"YES"<<endl;
    }
}
