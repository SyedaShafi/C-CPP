# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,cont=0,r;
        cin>>n>>k;
        while(n!=0)
        {
            if (n%k==0)
            {
                n=n/k;
                cont++;
            }
            else
            {
                r=n%k;
                cont+=r;
                n-=r;
            }
        }
        cout<<cont<<endl;
    }
}
