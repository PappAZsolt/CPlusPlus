#include <iostream>

using namespace std;

int zerof(int m)
{
    int s = 0, p = 5;
    while(p <= m)
    {
        s = s + m / p;
        p = p * 5;
    }
    return s;
}

int main ()
{
  int n;
  cin>>n;
  cout<<zerof(n);
  return 0;
}
