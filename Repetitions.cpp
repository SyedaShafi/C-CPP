# include <bits/stdc++.h>
using namespace std;
int main ()
{
   string str;
   cin>>str;
   int n=str.size(),c=1,i,mx=1;
   for (i=0;i+1<n;i++)
   {
       if (str[i]==str[i+1])
       {
           c++;
           mx=max(mx,c);
       }
       else{
        c=1;
       }
   }
   cout<<mx<<endl;
}
