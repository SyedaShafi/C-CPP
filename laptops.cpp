# include <iostream>
using namespace std;
int main ()
{
    int n,i,j,cont=0,m;
    cin>>n;
    m=n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        if (a==b)
            cont++;
    }
    if (cont==m)
        cout<<"Poor Alex"<<endl;
    else if (cont==0 || cont!=m)
        cout<<"Happy Alex"<<endl;

}
