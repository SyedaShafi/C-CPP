#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,d1,d2,i;
    cin>>n;
    string str[n];
    for (i=0;i<n;i++) cin>>str[i];

    d1=count(str,str+n,str[0]);
    d2=n-d1;

    if (d1>d2) cout<<str[0]<<endl;

    else {
        for (i=1;i<n;i++)
        {
            if (str[0]!=str[i])
            {
                cout<<str[i]<<endl;
                break;
            }
        }
    }
}
