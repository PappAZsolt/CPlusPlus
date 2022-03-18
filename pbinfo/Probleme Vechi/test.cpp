#include <iostream>
using namespace std;

void F(int n, int a[10], int &k)
{
  if (n == 0)
  {
    if (a[0] % 2 == 0)
    {
      k = 0;
    }
    else
    {
      k = -1;
    }
  }
  if (n > 0)
  {
    F(n - 1, a, k);
    if (a[n - 1] % 2 == 0)
    {
      if (k == -1)
        k = 0;
      k = k * 10 + a[n - 1];
    }
  }
}

int main()
{

  int n, a[10], i;
  int rez;
  cout << "Introduceti nr termeni:";
  cin >> n;
  cout << "Introduceti cifrele numarului:";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  F(n, a, rez);
  cout << "Numar rezultat:" << rez;
  return 0;
}