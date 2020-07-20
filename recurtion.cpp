# include <bits/stdc++.h>
using namespace std;
void myFunction( int counter)
{
    if (counter==0) return;
    cout<<counter<<endl;
    myFunction(counter-1);
    cout<<"hi"<<endl;
    return;
}
int main()
{
    int n;
    cin>>n;
    myFunction(n);
}
