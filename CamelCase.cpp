# include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int i,cnt=1;
    for (i=1;i<s.size();i++)
    {
        if (s[i]>='A'&&s[i]<='Z') cnt++;
    }
    cout<<cnt<<endl;
}
