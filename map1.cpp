# include <bits/stdc++.h>
# include <map>
using namespace std;
int main ()
{
    map<char,int> m;
    string x="shafiii codeeee";
    for (char c:x)
        m[c]++;
    cout<<m['i']<<" "<<m['e']<<" "<<m['z'];
}
