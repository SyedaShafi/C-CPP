# include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int age;
public:
    void setstudent(string s,int a)
    {
        name=s;
        age=a;
    }
    void showstudent()
    {
        cout<<"Name:"<<name;
        cout<<" Age:"<<age;
    }
};
int main ()
{
    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    pair<int,student>p4;
    p1=make_pair("Rahul",16);
    p2=make_pair("Bangladesh","Dhaka");
    p3=make_pair("Drilling C++",345.500);
    student s1;
    string s;
    int a;
    cout<<"Name and Age:";
    cin>>s>>a;
    s1.setstudent(s,a);
    p4=make_pair(1,s1);
    cout<<"Pair 1:"<<p1.first<<" "<<p1.second<<endl;
    cout<<"Pair 2:"<<p2.first<<" "<<p2.second<<endl;
    cout<<"Pair 3:"<<p3.first<<" "<<p3.second<<endl;
    cout<<"Pair 4:"<<p4.first<<" ";
    s1.showstudent();
}
