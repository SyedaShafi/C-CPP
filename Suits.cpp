# include <iostream>
using namespace std;
int main ()
{
    long long int a,b,c,d,e,f,sum,de,de1,de2,def;
    cin>>a>>b>>c>>d>>e>>f;
    if (e>=f)
    {
       if (a==b&&b==c&&c==d) sum=d*e;
       else
       {
           de=min(a,d);
           sum=de*e;
           def=d-de;
           if (def!=0)
           {
               d=def;
              de1=min(b,c);
              de2=min(de1,d);
              sum=sum+de2*f;
           }
       }
    }
    else if (f>=e)
    {
         if (a==b&&b==c&&c==d) sum=d*f;
         else
         {
             de1=min(b,c);
             de2=min(de1,d);
             sum=de2*f;
             def=d-de2;
             if (def!=0)
             {
                 d=def;
                 de=min(a,d);
                 sum=sum+de*e;
             }
         }
    }
    cout <<sum<<endl;
}
