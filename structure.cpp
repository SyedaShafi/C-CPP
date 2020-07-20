# include <iostream>
# include <string>
using namespace std;
struct address{
   int road_no;
   string house_name;
};
struct student {
   string name;
   int roll_no;
   address *addr;
};
int main ()
{
    student s;
    student *sptr;
    sptr=&s;
    address adr;
    sptr->addr=&adr;
    sptr->name="Shafi";
    sptr->roll_no=23545;
    sptr->addr->road_no=39;
    sptr->addr->house_name="Abdul Gani Vila";
    cout<<"name:"<<sptr->name<<endl;
    cout<<"roll no:"<<sptr->roll_no<<endl;
    cout<<"road no:"<<sptr->addr->road_no<<endl;
    cout<<"house name:"<<sptr->addr->house_name<<endl;

}

