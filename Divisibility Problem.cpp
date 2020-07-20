# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b,c=0,r;
        cin>>a>>b;
        if (a%b==0)
            cout<<c<<endl;
        else {
            r=a%b;
            c=b-r;
            cout<<c<<endl;
        }
    }
    return 0;
}
