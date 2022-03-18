#include <iostream>

using namespace std;

int main() {
  int n, m, x, a[101][101], cnt = 0;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  cin >> x;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) {
      if (x == a[1][j] or x == a[n][j] or x == a[i][1] or x == a[i][m]) cnt++;
    }
  if (cnt != 0)
    cout << "DA";
  else
    cout << "NU";
}