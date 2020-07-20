# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool flag=true;
        cin>>n;
        int a[n],i,a5=1,a10=0;
        for (i=0;i<n;i++) cin>>a[i];

        if (a[0]==5)
        {
            for (i=1;i<n;i++)
            {
                if (a[i]==5)
                {
                    a5++;
                    flag=true;
                }

                else if(a[i]==10)
                {
                    if (a5>0)
                    {
                        a5--;
                        a10++;
                        flag=true;
                    }

                    else {
                        flag=false;
                        break;
                    }
                }

                else if (a[i]==15)
                {
                    if (a10>0)
                    {
                        a10--;
                        flag=true;
                    }

                    else if(a5>1)
                    {
                        a5-=2;
                        flag=true;
                    }
                    else {
                        flag=false;
                        break;
                    }
                }
            }
        }

        else {
            flag=false;
        }

        if (flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
