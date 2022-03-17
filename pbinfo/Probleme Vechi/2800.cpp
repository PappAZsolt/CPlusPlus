#include <iostream>

using namespace std;

int main() {
  int n, m, a[51][51], x;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) {
      x = a[n][m];
      if (i == 1 or i == n) a[i][j] = x;
      if (j == 1 or j == m) a[i][j] = x;
    }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) cout << a[i][j] << " ";
    cout << '\n';
  }
}