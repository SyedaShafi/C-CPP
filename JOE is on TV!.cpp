# include <iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
       int r,g,b,sum,d;
       cin >>r>>g>>b;
       if (r==b && b==g) cout<<"Yes"<<endl;
       else if (r>b&&r>g)
       {
           sum=b+g;
           d=r-sum;
           if(d>1 && d!=0) cout<<"No"<<endl;
           else cout <<"Yes"<<endl;
       }
       else if (b>g)
       {
           sum=r+g;
           d=b-sum;
           if(d>1 && d!=0) cout<<"No"<<endl;
           else cout <<"Yes"<<endl;
       }
       else
       {
           sum=r+b;
           d=g-sum;
           if(d>1 && d!=0) cout<<"No"<<endl;
           else cout <<"Yes"<<endl;
       }

    }
}
