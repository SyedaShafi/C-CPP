# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
vector<ll> v;
ll x,maximum=0,i;
void func1()
{
   cin>>x;
   v.push_back(x);
   if(x>maximum)
   maximum=x;
}
void func2()
{
    if(v.back()==maximum)
    {
        v.pop_back();
        maximum=0;
        for(i=0;i<v.size();i++)
        maximum=(v[i]>maximum?v[i]:maximum);
    }
    else v.pop_back();
}
void func3()
{
    cout<<maximum<<"\n";
}
int main ()
{
    int n,opt;
    cin>>n;
    while(n--)
    {
       cin>>opt;
       if(opt==1) func1() ;
       else if(opt==2) func2() ;
       else if(opt==3) func3() ;

    }
}
