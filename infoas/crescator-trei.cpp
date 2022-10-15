#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b and b > c)
    cout << c << " " << b << " " << a;
  else if (a < b and b < c)
    cout << a << " " << b << " " << c;
  else if (a > b and b < c and a < c)
    cout << b << " " << a << " " << c;
  else if (a > b and b < c and a > c)
    cout << b << " " << c << " " << a;
  else
    cout << a << " " << c << " " << b;
}