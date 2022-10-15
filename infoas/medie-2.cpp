#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  float a, b, c, teza;
  cin >> a >> b >> c >> teza;
  cout << fixed << setprecision(2) << ((a + b + c) / 3) * 75 / 100 + teza * 25 / 100;
}