# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int r,g,b,ansr,ansg,ansb;
    cin>>r>>g>>b;
    ansr=(((r/2)+(r%2))*3)-3;
    ansg=(((g/2)+(g%2))*3)-2;
    ansb=(((b/2)+(b%2))*3)-1;
    if (ansr>ansg&&ansr>ansb) cout<<ansr+30<<"\n";
    else if (ansg>ansb) cout<<ansg+30<<"\n";
    else cout<<ansb+30<<"\n";

}
