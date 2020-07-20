# include <bits/stdc++.h>
using namespace std ;
class doc{
public:
    string name;
    void display();

};

void doc::display(){
cout<<doc::name<<endl;
}

int main ()
{
   doc fast;
   cin>>fast.name;
   fast.display();
}
