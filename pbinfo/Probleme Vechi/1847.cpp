#include <iostream>

using namespace std;

int prim(int x)
{
  if (x < 2)
    return 0;
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
      return 0;
  }
  return 1;
}

void P(int x[], int n, int &s)
{
  if (n == 0)
    s = 0;
  if (n > 0)
  {
    P(x, n - 1, s);
    if (prim(x[n - 1]))
      s += x[n - 1];
  }
}

int main()
{
  int n, x[101], s = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> x[i];
  P(x, n, s);
  cout << s;
}

//6 12 7 6 8 3 5