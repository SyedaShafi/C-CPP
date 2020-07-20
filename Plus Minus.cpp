# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int  n,nn=0,p=0,z=0,i;
    cin>>n;
    int a[n];
    for (i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]>0) p++;
        else if (a[i]<0) nn++;
        else z++;
    }
    printf("%6f\n",(float)p/n);
    printf("%6f\n",(float)nn/n);
    printf("%6f\n",(float)z/n);
    /*cout<<setprecision(6)<<(float)p/n<<"\n";
    cout<<setprecision(6)<<(float)nn/n<<"\n";
    cout<<setprecision(6)<<(float)z/n<<"\n";*/
}
