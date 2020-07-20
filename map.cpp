# include <bits/stdc++.h>
# include <map>
using namespace std;
int main ()
{
    map<string,int> m;
    int x,i;
    string s;
    for (i=0;i<5;i++){
    cin>>s>>x;
    m.insert(make_pair(s,x));
    }
    map<string,int>::iterator it;
    for (it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;;
}
