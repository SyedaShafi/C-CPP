# include <iostream>
using namespace std;
int main ()
{
    long long int t;
    cin>>t;
    while (t--)
    {
       long long int a,b,rem,cont1=0,cont2=0,m,d;
        cin >>a>>b;
        m=b;
        while (b!=0)
        {
            cont1++;
            rem=b%10;
            if (rem==9)
                cont2++;
            b=b/10;
        }
        if(m==9 && cont1==1)
            cout <<a<<endl;
        else if (cont1==cont2)
            cout<<cont2*a<<endl;
        else if (cont1>1)
        {
            d=cont1-1;
            cout <<d*a<<endl;
        }
        else cout<<"0"<<endl;

    }
}
