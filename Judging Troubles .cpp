# include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector<string> v;
    string s1,s2;
    int n,ans=0,i,k,f1,f2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1;
        v.push_back(s1);
    }
    sort(v.begin(),v.end());
    vector<string>:: iterator it;
    k=0;
    for(it=v.begin();it<v.end();it++)
    {
       f1=v.find(v[it]);
       f2=v.rfind(v[it]);
       a1[k]=(f2-f1+1);
       k++;
    }

    for(i=0;i<n;i++)
    {
        cin>>s1;
        v.push_back(s1);
    }
    sort(v.begin(),v.end());
    vector<string>:: iterator it;
    k=0;
    for(it=v.begin();it<v.end();it++)
    {
       f1=v.find(v[it]);
       f2=v.rfind(v[it]);
       a2.push_back(f2-f1+1);
       k++;
    }
    m=(a1.size()>a2.size()?a1.size:a2.size());
    for(i=0;i<m;i++)
    {
        ans=ans+min(a1[i],a2[i])
    }
}
