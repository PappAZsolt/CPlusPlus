#include <fstream>

using namespace std;

ifstream cin("adiacenta1.in");
ofstream cout("adiacenta1.out");
int n, x, y;
int a[101][101];

int main()
{
  while (cin >> x >> y)
  {
    a[x][y] = a[y][x] = 1;
    if (x > n)
      n = x;
    if (y > n)
      n = y;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << '\n';
  }
}