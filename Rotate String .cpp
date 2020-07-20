# include <bits/stdc++.h>
# include <string>
# include <vector>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        int l=s.size();
        for(int i=0;i<s.size();i++)
        {
            s1=s[0];
            s.insert(l,s1);
            s.erase(0,1);
            cout<<s<<" ";
        }
        cout<<"\n";
    }
}
