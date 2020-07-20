# include <bits/stdc++.h>
using namespace std;
int main ()
{
    while(EOF){
    int x[6],y[6],i,c=0;
    for (i=0;i<5;i++)
    {
        cin>>x[i];
    }
    for (i=0;i<5;i++)
    {
        cin>>y[i];
    }
    for (i=0;i<5;i++)
    {
        if(abs(x[i]-y[i])==1) c++;
    }
    if(c==5) cout<<"Y\n";
    else cout<<"N\n";
    }

}

