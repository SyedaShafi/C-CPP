# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        ll ans=0,i;
        cin>>str;
        for (i=0;i+1<str.size();i++)
        {
            if (str[i]=='x' && str[i+1]=='y')
            {
                ans++;
                i++;
            }
            else if (str[i]=='y'&& str[i+1]=='x')
            {
                ans++;
                i++;
            }
        }

        cout<<ans<<"\n";
    }
}
