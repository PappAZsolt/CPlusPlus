#include <iostream>

using namespace std;

int main() {
  int n, m, a[101][101], cnt = 0;
  int ver = 1;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  for (int i = 1; i <= n; i++) {
    ver = 1;
    for (int j = 1; j <= m; j++) {
      if (a[i][j] != a[i][1]) {
        ver = 0;
        break;
      }
    }
    if (ver == 1) cnt++;
  }
  cout << cnt;
}