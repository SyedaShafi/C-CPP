# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string getpalindrome(string str)
{
    map<char,ll> hmap;
    for (ll i=0;i<str.size();i++)
    {
        hmap[str[i]]++;
    }

    ll oddcount=0;
    char oddchar;
    for (auto x:hmap)
    {
        if (x.second%2!=0)
        {
            oddcount++;
            oddchar=x.first;
        }
    }

    if (oddcount>1 || oddcount==1 && str.size()%2==0)
        return "NO SOLUTION\n";

    string firsthalf="",secondhalf="";
    for (auto x:hmap)
    {
        string s(x.second/2,x.first);
        firsthalf=firsthalf+s;
        secondhalf=s+secondhalf;
    }

    return (oddcount==1)? (firsthalf+oddchar+secondhalf):(firsthalf+secondhalf);
}
int main()
{
    string str;
    cin>>str;
    cout<<getpalindrome(str);
    return 0;
}
