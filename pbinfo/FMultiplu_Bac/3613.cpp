#include <iostream>

using namespace std;

int Patrat(int n)
{
  int d = 2;
  int cnt = 0;
  int p;
  while (n != 1)
  {
    p = 0;
    while (n % d == 0)
    {
      n /= d;
      p++;
    }
    if (p > 0 and p % 2 != 0)
    {
      return false;
    }
    if (d == 2)
      d = 3;
    else
      d += 2;
    if (d * d > n)
      d = n;

  }
  return true;
}

int multiplu(int n)
{
  int i = 1;
  for (int i = 1; i <= n; i++)
  {
    int num = n * i;
    if (Patrat(num) == true)
      return num;
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  cout << multiplu(n);
}