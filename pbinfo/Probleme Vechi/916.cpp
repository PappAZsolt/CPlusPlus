#include <iostream>

using namespace std;

int factorial(int n, int & f)
{
  if (n==0)
   f = 1;
  else {
    factorial (n-1,f);
    f=f*n;
  }
  return f;
}

int main ()
{
  int n,f;
  cin>>n;
  cout<<factorial (n,f);
}
