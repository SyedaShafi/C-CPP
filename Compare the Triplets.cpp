# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a[3],b[3],ans[2]= {0},i;
    for (i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for (i=0; i<3; i++)
    {
        cin>>b[i];
    }

    for (i=0; i<3; i++)
    {
        if (a[i]>b[i]) ans[0]++;
        else if(a[i]<b[i]) ans[1]++;
    }


    cout<<ans[0]<<" "<<ans[1]<<"\n";
}

