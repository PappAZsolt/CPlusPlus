#include <iostream>
using namespace std;
int main() {
  int n, m, s = 0, maxi;
  int a[101][101];
  bool ok, gasit = false;
  cin >> m >> n;
  for (int i = 1; i <= m; ++i)
    for (int j = 1; j <= n; ++j) cin >> a[i][j];
  for (int j = 1; j <= n; ++j) {
    ok = true;
    for (int i = 1; i < m; ++i)
      if (a[i][j] != a[i + 1][j]) ok = false;
    if (ok == true) {
      a[0][j] = 1;
      gasit = true;
    } else
      a[0][j] = 0;
  }
  if (gasit == false)
    cout << "nu exista";
  else
    for (int j = 1; j <= n; ++j)
      if (a[0][j] == 1) cout << a[1][j] << " ";
  return 0;
}