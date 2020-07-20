# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,i,j=0;
        char ch='a';
        cin>>n>>a>>b;
        char s[2002];
        for(i=0; i<n; i++)
        {
            s[i]=ch;
            ch++;
            j++;
            if (j==b){
                ch='a';
                j=0;
            }
        }
        for(i=0; i<n; i++)
        cout<<s[i];
        cout<<"\n";

    }
}
