#include <iostream>

using namespace std;

double nreal(int a, int b)
{
  int aux = b;
  int p = 1;
  while (aux)
  {
    aux /= 10;
    p *= 10;
  }
  double numar = 1.0 * ((a * p) + b);
  numar = numar / p;
  return numar;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << nreal(a, b);
}