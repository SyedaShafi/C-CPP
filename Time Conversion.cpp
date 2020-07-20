#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int h,m,s;
    char c;
    string str;
    cin>>h>>c>>m>>c>>s;
    cin>>str;
    if (h==12&&str=="AM") h-=12;
    else if (h<12&&str=="AM") h+=0;
    else if (h==12&&str=="PM") h+=0;
    else if (h<12&&str=="PM") h+=12;
    printf("%02d%c%02d%c%02d",h,c,m,c,s);
}
