
# include <iomanip>
# include <iostream>
using namespace std;
int main ()
{
    cout<< setbase(8) <<65<<endl;
    cout<< setbase(16) <<65<<endl;
    cout<< setbase(10) <<0101<<endl;
    cout<< setbase(10) <<0x41<<endl;
}
