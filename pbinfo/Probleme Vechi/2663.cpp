#include <iostream>

using namespace std;

int NrDiv(int n)
{
  int d=0, j;
 for (j=1; j*j<n; ++j)
       if (n%j==0) d+=2;
 if (j*j==n) ++d;
 return d;

}
int main ()
{
  int n;
  cin>>n;
  cout<<NrDiv(n);
}
