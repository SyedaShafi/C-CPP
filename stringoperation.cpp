# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string a,b,c;
    a="shafi";
    b=a+a;
   int pos=b.find("af");
   c=b.substr(4,3);
   cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<pos<<"\n";
}
