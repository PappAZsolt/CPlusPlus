#include <iostream>

using namespace std;

int main() {
  int n, m, a[100][100], min1 = 9999999, min2 = 999999;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  for (int j = 1; j <= m; j++) {
    for (int i = 1; i <= n; i++) {
      if (j == 1) {
        if (a[i][j] < min1) {
          min1 = a[i][j];
        }
      }
      if (j == m)
        if (a[i][j] < min2) {
          min2 = a[i][j];
        }
    }
  }
  int ham = min2;
  for (int j = 1; j <= m; j++) {
    for (int i = 1; i <= n; i++) {
      if (j == 1 and a[i][j] == min1) {
        swap(a[i][j], ham);
      }

      if (j == m and a[i][j] == min2) swap(a[i][j], min1);
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cout << a[i][j] << " ";
    }
    cout << '\n';
  }
}

/* 7 5 19
   1 8 4
   23 6 3
   10 2 9 */