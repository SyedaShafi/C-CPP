# include <bits/stdc++.h>
using namespace std;
int main ()
{
   int n,occur,i;
   cin>>n;
   int arr[n];
   for (i=0;i<n;i++)
        cin>>arr[i];
   int *it;
   it=max_element(arr,arr+n);
   occur=count(arr,arr+n,*it);
   cout<<occur<<"\n";
}
