#include <fstream>

using namespace std;

ifstream cin("grade.in");
ofstream cout("grade.out");

int n, a[101][101];
int s, x, y;
int main()
{
  cin >> n;
  while (cin >> x >> y)
    a[x][y] = a[y][x] = 1;
  for (int i = 1; i <= n; i++)
  {
    s = 0;
    for (int j = 1; j <= n; j++)
      if (a[i][j])
        s++;
    cout << s << " ";
  }
}