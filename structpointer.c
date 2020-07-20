# include <iostream>
using namespace std;
struct student {
 int rollno;
 char sex;
};
int main ()
{
    student mina;
    student *ptr;
    cout << ptr->rollno<<endl;
    cout <<ptr->sex<<endl;
}
