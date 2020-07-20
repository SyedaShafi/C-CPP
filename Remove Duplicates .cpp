# include <bits/stdc++.h>
# include <string>
using namespace std;
int main ()
{
    string s;
    char s1;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s1=s[i];
        for (int j=i+1; j<s.size(); j++)
        {
            if(s[j]==s1)
            {
                s.erase(j,1);
                j--;
            }
        }
    }
    cout<<s<<"\n";
}

