# include <iostream>
# include <string>
using namespace std;
int main ()
{
    int n,sum=0,d;
    cin>>n;
    string op;
    cin>>op;
    for (int i=0;op[i]!='\0';i++)
    {
        if (op[i]=='-')
        {
            if (sum==0) sum=1;
            sum=sum-1;
        }
        else if (op[i]=='+')
        {
            sum=sum+1;
        }
    }
    cout<<sum<<endl;
}
