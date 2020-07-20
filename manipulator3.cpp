
# include <iomanip>
# include <iostream>
using namespace std;
int main ()
{
    cout<<setw(10)<<setiosflags(ios::left)<<"Rama"<<endl;
    cout<<setw(10)<<setiosflags(ios::right)<<"Shahnaz"<<endl;
    cout<<setiosflags(ios::showpos)<<100<<endl;
    cout<<setiosflags(ios::showpoint)<<22/7<<endl;
    double a=3.1416;
    cout<<setiosflags(ios::scientific)<<a<<endl;
    cout<<setiosflags(ios::fixed)<<a<<endl;
}

