# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll ts,rem;
        cin>>ts;

        if (ts%2==0)
        {
            while(1)
            {
                rem=ts%2;
                if (rem!=0)
                    break;
                else
                    ts=ts/2;
            }

            if (ts==1) cout<<0<<"\n";
            else cout<<ts/2<<"\n";
        }

        else
        {
            if (ts==1) cout<<0<<"\n";
            else cout<<ts/2<<"\n";
        }
    }
}
