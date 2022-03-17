#include <iostream>
#include <cmath>

using namespace std;
long long  nroot(int n, long long x)
{
  float h=(double) 1.0/n;
  if (x<0)
  x=-x;
  if (x==0)
  return 0;
  else return pow(x,h);
}
int main ()
{
  int n;
  long long x;
  cin>>n>>x;
  cout<<nroot(n,x);
  return 0;
}
