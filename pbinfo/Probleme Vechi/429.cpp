#include <iostream>

using namespace std;

int main()

{
  int n, z = 0, u = 0, rest;

  cin >> n;

  while (n)

  {
    rest = n % 2;

    if (rest)
      ++u;

    else
      ++z;

    n /= 2;
  }

  cout << z << " " << u;

  return 0;
}