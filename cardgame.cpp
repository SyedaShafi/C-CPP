# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k1,k2,count=0;
        cin>>n>>k1>>k2;
        int a1[k1],a2[k2];
        for (int i=0; i<k1; i++)
            cin >>a1[i];
        for (int i=0; i<k2; i++)
            cin >>a2[i];
        for (int i=0; i<k1; i++)
        {
            if (n==a1[i]) count = 1;
        }
        if (count==1) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;

    }
}
