# include <bits/stdc++.h>
# include <tuple>
using namespace std;
int main ()
{
    tuple<string,int,int> t1;
    int i;
    t1=make_tuple("Shafi",20,07);
   // for (i=0;i<3;i++)
        cout<<get<0>(t1)<<" ";
        cout<<get<1>(t1)<<" ";
        cout<<get<2>(t1)<<" ";

}
