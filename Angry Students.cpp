# include <iostream>
# include <string>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,i,k=-1;
        cin>>n;
        string s;
        cin>>s;
        for (i=0;i<n;i++)
        {
            if (s[i]=='A')
                k=i;
            else if (s[i]=='P'&&k>=0)
                sum=max(sum,i-k);
        }
        cout<<sum<<endl;
    }
    return 0;
}
