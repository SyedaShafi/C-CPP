#include <bits/stdc++.h>
using namespace std;
class doc
{
   private:
       int age;
   public:
    void display()
    {
        cout<<age<<endl;
    }

    void setage(int value)
    {
        age =value;
    }
};
int main ()
{
  doc hum;
  hum.setage(66);
  hum.display();
}
