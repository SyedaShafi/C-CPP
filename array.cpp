# include <iostream>
using namespace std;
void display (const int *start,const int *end);
int main ()
{
  int arr[]={11,22,33,44,55,66,77,88,99};
  display (arr,arr+9);
}
void display (const int *start,const int *end)
{
    while (start!=end)
    {
        cout<<*start;
        start++;
    }
}
