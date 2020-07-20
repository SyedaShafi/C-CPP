# include <iostream>
# include <string>
using namespace std;
int main ()
{
    string a,b;
    cin>>a;
    b=a;
    int i,c=0,j,l;
    l=a.length();
    for (i=1;i<l;i++)
    {
        if (a[i]>=65 && a[i]<=90)
            c++;
    }
    if (l-1==c)
    {
       for (i=0;i<l;i++)
       {
           if (islower(a[i]))
            a[i]=toupper(a[i]);
           else a[i]=tolower(a[i]);
       }
       cout<<a<<endl;
    }
    else cout<<b<<endl;
}
