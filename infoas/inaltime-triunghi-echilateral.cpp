#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  float x;
  cin >> x;
  cout << fixed << setprecision(2) << (x * sqrt(3)) / 2;
}