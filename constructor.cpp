#include <bits/stdc++.h>
using namespace std ;
class human{
private:
    string name;
    int age;
public:
    human()
    {
        name="noname";
        age=0;
        cout<<"constructor is called when you create an object of human\n";
    }
    void nameage(string nam,int agee)
    {
        name=nam;
        age=agee;
    }
    void display()
    {
        cout<<name<<endl<<age;
    }

};
/*human::human()
{
    human::name="shafi";
    human::age=20;
    cout<<"constructor is called when you create an object of human\n";
    cout<<name<<endl<<age;
}*/
int main()
{
    human dam;
    dam.nameage("shafi",20);
    dam.display();
}
