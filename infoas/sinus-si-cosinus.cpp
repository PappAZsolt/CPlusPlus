#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
  int n;
  cin >> n;

  cout << fixed << setprecision(2) << sin((n * PI) / 180) << " " << cos((n * PI) / 180);
}