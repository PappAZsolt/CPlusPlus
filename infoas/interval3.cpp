#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if (x % 2 != 0)
    x++;
  if (y % 2 != 0)
    y--;
  cout << (y - x) / 2 + 1;
  return 0;
}