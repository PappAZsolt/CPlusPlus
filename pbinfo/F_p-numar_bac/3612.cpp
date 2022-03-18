#include <iostream>

using namespace std;

int Suma_div(int x)
{
  int s = 0;
  for (int d = 1; d * d <= x; ++d)
  {
    if (x % d == 0)
    {
      s += d;
      if (d * d < x)
        s += x / d;
    }
  }
  return s;
}
int kpn(int a, int b, int k)
{
  int s = 0;
  for (int i = a; i <= b; i++)
  {
    /// calculam suma divizorilors
    s = Suma_div(i);
    if (s % 2 == i % 2)
    {
      k--;
      if (k == 0)
        return i;
    }
  }
  return -1;
}

int main()
{
  int a, b, k;
  cin >> a >> b >> k;
  cout << kpn(a, b, k);
}