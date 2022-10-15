#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  float p, r;
  cin >> p >> r;
  cout << fixed << setprecision(2) << p - p * (r / 100);
}