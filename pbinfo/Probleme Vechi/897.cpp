#include <iostream>

using namespace std;

int sumcif(int n)
{
  int s=0;
  while (n)
  {
    int c=n%10;
    s=s+c;
    n/=10;
  }
  return s;
}

int main ()
{
  int n;
  cin>>n;
  cout<<sumcif(n);
  return 0;
}
