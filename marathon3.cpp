# include <iostream>
using namespace std;
int main ()
{
    long long int a,b,c,t,i;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if ((a*a+b*b)==(c*c)) c=1;
        else if ((b*b+c*c)==(a*a)) c=1;
        else if ((c*c+a*a)==(b*b)) c=1;
        else c=-1;
        if (c==1)
            cout<<"Case "<<i<<":"<<" yes"<<endl;
        else
            cout<<"Case "<<i<<":"<<" no"<<endl;
    }
}
