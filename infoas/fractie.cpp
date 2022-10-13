#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  float a, b;
  cin >> a >> b;
  cout << fixed << setprecision(2) << a / b;
}