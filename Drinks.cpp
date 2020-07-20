# include <bits/stdc++.h>
using namespace std;
int main ()
{
   int n,i;
   float d,sum=0;
   cin>>n;
   int a[n];
   for (i=0;i<n;i++)
    cin>>a[i];
   for (i=0;i<n;i++) sum=sum+a[i];
   d=sum/n;
   printf ("%.12lf\n",d);
}
