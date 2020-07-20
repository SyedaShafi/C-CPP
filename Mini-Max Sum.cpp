# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main ()
{
    ll arr[5],i,sum=0;
    for (i=0;i<5;i++)
       {
          cin>>arr[i];
          sum=sum+arr[i];
       }
    ll *it1,*it2;
    it1=max_element(arr,arr+5);
    it2=min_element(arr,arr+5);
    cout<<sum-*it1<<" ";
    cout<<sum-*it2<<"\n";
}
