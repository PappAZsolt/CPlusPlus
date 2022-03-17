#include <iostream>

using namespace std;

int oglindit(int n)
{
  int s=0;
  while (n)
  {
    int c=n%10;
    s=s*10+c;
    n/=10;
  }
  return s;
}

int main ()
{
  int n;
  cin>>n;
  cout<<oglindit(n);

}
