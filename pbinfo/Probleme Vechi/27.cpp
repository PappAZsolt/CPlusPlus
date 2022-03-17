#include <iostream>

using namespace std;

int nr_cif_zero(int & n)
{
  int cnt=0;
  if (n==0)
   return 1;
  while (n)
  {
    int c=n%10;
    if (c==0)
     cnt++;
    n/=10;
  }
  return cnt;
}

int main ()
{
  int n;
  cin>>n;
  cout<<nr_cif_zero(n);
}
