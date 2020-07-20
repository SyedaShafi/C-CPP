# include <iostream>
# include <string>
# include <cmath>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    long long int len,i,ans=0;
    len=s.length();
    if (s[0]=='0')
        ans=0;
    for (i=1; i<len; i++)
    {
        if (len%2==0)
        {
            ans=len/2;
        }
        else{
                if (s[i]=='0') ans=len/2;
               else  {
                    ans=(len/2)+1;
                    break;
               }
        }

    }

    cout<<ans<<endl;
    return 0;
}
