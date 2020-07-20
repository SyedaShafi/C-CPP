# include <iostream>
using namespace std;
struct student {
char name;
float salary;
};
int main ()
{
    student mx,nx;
    student *ptr;
    ptr=&mx;
    ptr->name='s';
    ptr->salary=90000;
    nx.name='S';
    nx.salary=50000;
    cout <<ptr->name<<endl;
    cout<<ptr->salary<<endl;
    cout<<nx.name<<endl;
    cout<<nx.salary<<endl;
}
