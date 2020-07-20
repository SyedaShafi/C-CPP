# include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    vector<string> s;

    sort(str.begin(),str.end());


    do{
        s.push_back(str);
    }while(next_permutation(str.begin(),str.end()));

    cout<<s.size()<<"\n";
    for (auto x:s)
    {
        cout<<x<<"\n";
    }

}
