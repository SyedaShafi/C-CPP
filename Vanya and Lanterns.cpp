# include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int n,l,mx=0,mxx;
    float ans=0;
    cin>>n>>l;
    int a[n],i;
    for (i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (i=0; i<n-1; i++)
    {
         mx=max(mx,(a[i+1]-a[i]));
    }
    mxx=max((a[0]-0),(l-a[n-1]));
    mxx=mxx*2;
    mx=max(mxx,mx);
    ans=(float)mx/2;
    printf("%.10f\n",ans);

}
