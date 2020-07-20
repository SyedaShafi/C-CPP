# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2,x;
        cin>>a1>>b1;
        cin>>a2>>b2;

        x=min(a1,b1)+min(a2,b2);

        if (x==(max(a1,b1)) && x==(max(a2,b2)))
        {
            cout<<"YES\n";
        }

        else {
            cout<<"NO\n";
        }
    }
}