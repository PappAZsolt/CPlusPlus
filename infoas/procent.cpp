#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  float a;
  cin >> a;
  cout << fixed << setprecision(2) << 100 / a << "%";
}
