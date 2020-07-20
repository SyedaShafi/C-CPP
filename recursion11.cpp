# include <bits/stdc++.h>
using namespace std;
void generatesubset(string str)
{
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));

}
int main()
{
    string str;
    cin>>str;
    string curr="";
    generatesubset(str);
}
