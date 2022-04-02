#include <iostream>

using namespace std;

int k = 0;
void rest(int x, int y, int n, int &k)
{
  k = 0;
  for (int i = n; i > 1 && k == 0; i--)
  {
    if (i % x == 2 and i % y == 2)
      k = i;
  }
}

int main()
{
  int x, y, n;
  cin >> x >> y >> n;
  rest(x, y, n, k);
  cout << k << '\n';
}