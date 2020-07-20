# include <bits/stdc++.h>
using namespace std;
int i;
int gcd(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;
    return gcd(b%a,a);
}

int findlcm(int a1[],int n)
{
    int ans=a1[0];
    for(i=1;i<n;i++)
    {
        ans=((a1[i]*ans)/(gcd(a1[i],ans)));
    }
    return ans;
}

int findgcd(int a2[],int m)
{
   int result=a2[0];
   for (i=0;i<m;i++)
   {
       result=gcd(result,a2[i]);
       if (result==1) return 1;
   }

   return result;
}
int main ()
{
    int n,m,c=0,nlcm,mgcd,j;
    cin>>n>>m;
    int a1[n],a2[m];
    for (i=0;i<n;i++)
        cin>>a1[i];
    for (i=0;i<m;i++)
        cin>>a2[i];


    nlcm=findlcm(a1,n);
    mgcd=findgcd(a2,m);


    for (i=nlcm,j=2;i<=mgcd;i=nlcm*j,j++)
    {
        if (mgcd%i==0) c++;
    }

    cout<<c<<endl;
}
