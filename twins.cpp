# include <iostream>
# include <algorithm>
using namespace std;
int main ()
{

    int n,i,j,s1=0,s2=0,cont=0;
    cin>>n;

    int arr[n];
    for (i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for (i=n-1;i>=0;i--)
    {
      s1=s1+arr[i];
      cont++;
      s2=0;
      for (j=0;j<=(i-1);j++)
      {
          s2=s2+arr[j];
      }
      if (s1>s2) break;
    }
    cout<<cont<<endl;
    return 0;

}
