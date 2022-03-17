#include <iostream>

using namespace std;

int nrmaxim(int n)
{
  int p = 1, k = 0, aux = n, nrmax = 0;

  while (aux)
  {
    p = p * 10;
    k++;
    aux /= 10;
  }
  p /= 10;

  // facem permutari
  while (k != 0)
  {
    n = (n % 10) * p + n / 10;
    if (n > nrmax)
      nrmax = n;
    k--;
  }
  return nrmax;
}

int main()
{
  int n, nmax = 0;
  cin >> n;
  // permutam cifrele numarului
  // p1 -> determin cifrele numarului
  // p2 -> determin puterea lui 10 cu care trebuie sa inmultim
  // p3 -> in structura repetitiva formam noul numar
  cout << nrmaxim(n);
}