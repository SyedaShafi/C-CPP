# include <bits/stdc++.h>
using namespace std;
int main ()

{
    string s;
    int i,k=0,len;
    cin>>len;
    bool n=0,lc=0,up=0,sc=0;
    cin>>s;
    for (i=0;i<s.size();i++)
    {
        if (isdigit(s[i])) n=true;
        else  if (islower(s[i])) lc=true;
        else  if (isupper(s[i])) up=true;
        else sc=true;
    }

    if (!n) k++;

    if (!lc) k++;

    if (!up) k++;

    if (!sc) k++;

    if (len<6) cout<<max(6-len,k)<<endl;
    else cout<<k<<endl;
}
