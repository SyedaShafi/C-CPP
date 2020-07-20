# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int s,div,sum=0,rem,m;
        cin>>s;
        m=s;
        while (s>=10)
        {
            div=s/10;
            rem=s%10;
            sum=sum+div;
            s=div+rem;
        }
        if (m<10) cout<<m<<endl;
        else cout<<m+sum<<endl;

    }
}
