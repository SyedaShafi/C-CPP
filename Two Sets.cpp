# include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll n,i,tsum,sum=0,p;
    vector<ll> v;
    cin>>n;
    if ((n*(n+1))%4!=0)
    {
        cout<<"NO\n";
    }

    else {
            cout<<"YES\n";
        tsum=(n*(n+1))/4;

        if ((tsum%n)==0)
        {
            v.push_back(n);
            i=1;
            sum+=n;
            while(tsum!=sum)
            {
                v.push_back(n-i);
                sum+=n-i;
                v.push_back(i);
                sum+=i;
                i++;
            }

            cout<<v.size()<<"\n";

            sort(v.begin(),v.end());

            for (auto x:v)
                cout<<x<<" ";

            cout<<"\n";
            cout<<n-(v.size())<<"\n";

            p=0;
            for (i=1;i<=n;i++)
            {
                if (p<v.size() && v[p]==i) {
                    p++;
                    continue;
                }

                else cout<<i<<" ";
            }

            cout<<"\n";
        }

        else {
            v.push_back(n);
            v.push_back(1);
            sum=sum+n+1;
            i=1;

            while(tsum!=sum)
            {
                v.push_back(n-i);
                sum+=n-i;
                i++;
                v.push_back(i);
                sum+=i;
            }

            cout<<v.size()<<"\n";

            sort(v.begin(),v.end());
            for (auto x:v)
            cout<<x<<" ";

            cout<<"\n";

            cout<<n-v.size();
             cout<<"\n";
            p=0;
            for (i=1;i<=n;i++)
            {
                if (p<v.size() && v[p]==i) {
                    p++;
                    continue;
                }

                else cout<<i<<" ";
            }

            cout<<"\n";
        }
    }
}
