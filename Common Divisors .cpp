#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int l)
{
    if (m == 0) return l;
    return gcd(l%m,m);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,l,mx;
        cin>>m>>l;
        mx= gcd(m,l);
        int cnt = 0;
        for (int i=1;i<=sqrt(mx);i++)
        {
            if (mx%i==0)
            {
                if (mx/i == i)
                    cnt++;
                else
                    cnt += 2;
            }
        }
        cout<<cnt<<"\n";
    }
}
