# include <bits/stdc++.h>
using namespace std;
void permutation(string str,int s,int e)
{
    if (s==e)
       {
           cout<<str<<endl;
       }
    else
    {
        for (int i=s; i<=e; i++)
        {
            swap(str[s],str[i]);
            permutation(str,s+1,e);
            swap(str[s],str[i]);
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    permutation(str,0,n-1);
}
