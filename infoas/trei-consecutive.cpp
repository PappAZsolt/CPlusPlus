#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;
  int x = (n - 3) / 3;
  if (n % 3 != 0)
    cout << "NU";
  else
    cout << x << " " << x + 1 << " " << x + 2;
}