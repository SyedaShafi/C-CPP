# include <iostream>
using namespace std;
int fact(int num);
int main ()
{
    int num;
    cin>>num;
    int result=fact(num);
    cout<<result;
}
int fact(int num)
{
    if (num==0 || num==1) return 1;
    else return num*fact(num-1);
}

