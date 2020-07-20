# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        for (int i=1;i+1<str.size();i++)
        {
            if (str[i]==str[i+1])
            {
                str.erase(i,1);
            }
        }

        cout<<str<<endl;
    }
}
