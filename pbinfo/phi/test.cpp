#include <iostream>
using namespace std;

int Phi(int n)
{
  long long cnt = n;
  int d = 2;
  while (n > 1)
  {
    if (n % d == 0)
    
      cnt = cnt * (d - 1) / d;
      while (n % d == 0)
        n = n / d;
    }
    if (d == 2)
      d = 3;
    else
      d = d + 2;
    if (d * d > n)
      d = n;
  }
  return cnt;
}

int main()
{
  int n;
  cin >> n;
  cout << Phi(n);
  return 0;
}
