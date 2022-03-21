#include <fstream>

using namespace std;

ifstream cin("adiacenta.in");
ofstream cout("adiacenta.out");

int n, m, a[101][101], x, y;

int main()
{
  cin >> n >> m;
  for (int i = 1; i <= m; i++)
  {
    cin >> x >> y;
    a[x][y] = a[y][x] = 1;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
      cout << a[i][j] << " ";
    cout << '\n';
  }
}