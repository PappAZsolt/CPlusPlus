#include <iostream>

using namespace std;

int main()
{
  long long a;
  cin >> a;
  int suma = 0;
  while (a)
  {
    int c = a % 10;
    suma += c * c;
    a /= 10;
  }
  cout << suma;
}