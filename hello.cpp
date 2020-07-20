# include <iostream>
using namespace std;
int main ()
{
    char x;
    cout <<"Enter a Letter"<<endl;
    cin >>x;
    switch(x)
    {
    case 'a' ... 'z':
        cout <<"lower case letter"<<endl;
        break;
    case 'A' ... 'Z':
       cout <<"Upper case letter"<<endl;
       break;
    }
}
