#include <iostream>

using namespace std;

int concat (int & a, int & b)
{
  int p=10;
  int c=b;
  while (b)
  {
    a=a*10;
    b/=10;
  }
  return a+c;
}
int main ()
{
  int a,b;
  cin>>a>>b;
  cout<<concat(a,b);

}
