# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    vector<int> v1,v2;
    int n,m,i,a,j,cnt1,cnt2,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());


    for(j=0,k=0;j<n,k<m;j++,k++) {
    cnt1=count(v1.begin(),v1.end(),v1[j]);
    cnt2=count(v2.begin(),v2.end(),v2[k]);
    if((cnt2-cnt1)>0) cout<<v2[k]<<" ";
    j=j+cnt1-1;
    k=k+cnt2-1;
    }
    cout<<"\n";
}
