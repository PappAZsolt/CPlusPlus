#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int volum = a * b * c;
  int aria_totala = 2 * (a * b + a * c + b * c);
  cout << aria_totala << " " << volum;
}
