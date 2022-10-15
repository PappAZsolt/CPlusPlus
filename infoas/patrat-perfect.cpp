#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  if (sqrt(n) == (int)sqrt(n))
    cout << "DA";
  else
    cout << "NU";
}