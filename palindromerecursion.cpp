# include<bits/stdc++.h>
using namespace std;
string st,str1,s,str;
string printstr(string str)
{
    if (str.size()==0)
    {
        return str ;
    }
    else{
         printstr(str.substr(1));
         str1=str1+str[0];
    }
    return str1;
}
int main()
{
    cin>>st;
    s=st;
    str1=printstr(st);
    cout<<str1<<endl;
    if(s==str1) cout<<"Yes THis is A Palindrome\n";
    else cout<<"No THis Not A is Palindrome\n";
}

