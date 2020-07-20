# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int pos,a[1000],j=0,k,i,m;
    string s;
    cin>>s;
    m=s.size();
    i=0;
    while(1)
    {
        if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            pos=i;
            s.erase(pos,3);
        }
        else {
                break;
        }
    }
    for (j=0; j<s.size(); j++)
    {
        if(s[j]=='W'&&s[j+1]=='U'&&s[j+2]=='B')
        {
            k=j;
            s.replace(k,3," ");
        }
    }
    cout<<s<<"\n";

}
