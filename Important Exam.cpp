# include <iostream>
# include <cmath>
using namespace std;
unsigned long long int  decimal(unsigned long long int num)
{
   unsigned long long int i=0,sum=0,rem;
   while (num>0)
   {
       rem=num%10;
       sum=sum+rem*pow(2,i);
       num=num/10;
       i++;
   }
   return sum;
}
main ()
{
    unsigned long long int num,dec,j,m,cont=0;
    cin>>num;
    dec=decimal(num);
    j=0;
    while (1)
    {
        m=pow(4,j);
        if (m<dec) cont++;
        else break;
        j++;
    }
    cout<<cont<<endl;
}
