#include <fstream>

using namespace std;

ifstream cin("listavecini.in");
ofstream cout("listavecini.out");

int n, a[101][101];
int x, y;
int main()
{
  cin >> n;
  while (cin >> x >> y)
  {
    a[x][y] = a[y][x] = 1;
  }

  for (int i = 1; i <= n; i++)
  {
    int k = 0;
    for (int j = 1; j <= n; j++)
      if (a[i][j])
        k++;
    cout << k << " ";
    for (int j = 1; j <= n; j++)
      if (a[i][j])
        cout << j << " ";
    cout << '\n';
  }
}