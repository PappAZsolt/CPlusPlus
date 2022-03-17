#include <iostream>

using namespace std;

int prim(int n) {
  int ham = 1;
  if (n == 0 or n == 1) return 0;
  if (n == 2) return 1;
  for (int d = 2; d * d <= n and ham == 1; d++)
    if (n % d == 0) ham = 0;
  if (ham == 0) return 0;
  return 1;
}

int main() {
  int n, m, a[101][101], cnt = 0;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      if (i % 2 == 0)
        if (prim(a[i][j]) != 0) cnt++;
  cout << cnt;
}