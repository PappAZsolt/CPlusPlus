#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  float a, b, c;
  cin >> a >> b >> c;
  cout << fixed << setprecision(2) << (a + b + c) / 3;
}
