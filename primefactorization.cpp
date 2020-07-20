# include <bits/stdc++.h>
using namespace std ;
typedef long long int ll;

void factorization (ll n)
{
  int count=0;
  // count the number of times 2 divides
  while (!(n%2))
  {
      count++;
      n>>=1; // equivalent to n=n/2
  }
  if (count) cout<<2<<" "<<count<<endl;
  // check for all the possible numbers that can divide it
  for (ll i=3;i<=sqrt(n);i+=2)
  {
      count=0;
      while(n%i==0)
      {
          count++;
          n=n/i;
      }
      if (count) cout<<i<<" "<<count<<endl;
  }
  if (n>2) cout<<n<<" "<<1<<endl;
}

int main ()
{
    ll n;
    cin>>n;
    factorization(n);
    return 0;
}
