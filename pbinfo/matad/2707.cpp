#include <iostream>

using namespace std;

int n, a[101][101];
bool ok = true;
int main()
{

  cin >> n;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      cin >> a[i][j];
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j == i and a[i][j] != 0)
        ok = false;
      if (a[i][j] > 1)
        ok = false;
      if (a[i][j] != a[j][i])
        ok = false;
    }
  }
  if (ok)
    cout << 1;
  else
    cout << 0;
}