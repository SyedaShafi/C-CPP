# include <bits/stdc++.h>
using namespace std;
int main ()
{
    int best=0,sum=0,a[]={-1,2,4,-3,5,2,-5,2};
    for(int i=0;i<8;i++)
    {
        sum=max(a[i],sum+a[i]);
        best=max(best,sum);
    }
    cout<<best;
}
