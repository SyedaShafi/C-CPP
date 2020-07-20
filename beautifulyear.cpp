# include <bits/stdc++.h>
using namespace std;
int ddigit(int n)
{
    int a[10]={0},r,i,cont=0;
    while(n)
    {
        r=n%10;
        a[r]=1;
        n=n/10;
    }
    for (i=0;i<10;i++)
    {
        if(a[i]==1) cont++;

    }
    return cont;

}
int main ()
{
    int year,d;
    cin>>year;
    while(year < INT_MAX){
    d=ddigit(year+1);
    if (d==4){
    cout<<year+1<<endl;
    break;
    }
    else year=year+1;
    }
}
