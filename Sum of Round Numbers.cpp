# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n,ans="";
        cin>>n;
        int len,i,c=0;
        len=n.size();
        for (i=len-1;i>=0;i--)
        {
            if (n[i]>'0')
            {
                c++;
                ans=ans+(n.substr(i,len-i))+" ";
                n.replace(i,1,"0");
            }

        }
        cout<<c<<"\n"<<ans;
        cout<<"\n";
    }
}