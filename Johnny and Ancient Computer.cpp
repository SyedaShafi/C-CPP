# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans=0;
        cin>>a>>b;
        if (a>b)
        {
            while(a!=b)
            {
                if (a%8==0 && (a/8)>=b)
                {
                    ans++;
                    a=a/8;
                }
                else if (a%4==0 && (a/4)>=b)
                {
                    ans++;
                    a=a/4;
                }

                else if (a%2==0 && (a/2)>=b)
                {
                    ans++;
                    a=a/2;
                }

                else
                {
                    ans=-1;
                    break;
                }
            }
        }

        else if (a<b)
        {
            while(a!=b)
            {
                if (b%8==0 && (b/8)>=a)
                {
                    ans++;
                    b=b/8;
                }

                else if (b%4==0 &&(b/4)>=a)
                {
                    ans++;
                    b=b/4;
                }

                else if (b%2==0 && (b/2)>=a)
                {
                    ans++;
                    b=b/2;
                }

                else
                {
                    ans=-1;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
}
