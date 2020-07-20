# include <bits/stdc++.h>
using namespace std;
void TowerOfHanoi(char a,char b,char c,int n)
{
    if (n==1)
    {
        cout<<"Moving "<<n<<" from "<<a<<" to "<<c<<"\n";
        return ;
    }

    TowerOfHanoi(a,c,b,n-1);
    cout<<"Moving "<<n<<" from "<<a<<" to "<<c<<"\n";
    TowerOfHanoi(b,a,c,n-1);
    cout<<"Moving "<<n<<" from "<<a<<" to "<<c<<"\n";
}
int main()
{
    int n;
    cin>>n;
    TowerOfHanoi('a','b','c',n);
}
