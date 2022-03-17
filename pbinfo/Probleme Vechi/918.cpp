#include <iostream>

using namespace std;

void sumcif(int n, int & s)
{
  if (n!=0)
   sumcif(n/10,s);
  else
   s=0;
   s=s+n%10;
}

int main ()
{
  int n,s;
  cin>>n;
  sumcif(n,s);
  cout<<s;

}
