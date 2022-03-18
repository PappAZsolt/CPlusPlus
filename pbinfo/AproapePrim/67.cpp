#include <iostream>

using namespace std;

int prim(int n)
{
  if (n == 2)
    return true;
  if (n == 0 or n == 1)
    return false;
  if (n % 2 == 0)
    return false;
  for (int i = 3; i < n; i += 2)
    if (n % i == 0)
      return false;
  return true;
}

int a_prim(int n)
{
  if (n == 0)
    return -1;
  int d = 2;
  int cnt = 0;
  while (n != 1)
  {
    if (prim(d) == false and cnt == 2)
      return false;
    /* cout << d << " " << prim(d) << '\n'; */
    while (n % d == 0)
      n /= d;
    if (d == 2)
      d = 3;
    else
      d += 2;
    if (d * d > n)
      d = n;
    cnt++;
    if (cnt > 2)
      break;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  cout << a_prim(n);
}