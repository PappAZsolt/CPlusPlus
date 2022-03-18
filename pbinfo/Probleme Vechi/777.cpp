#include <algorithm>
#include <iostream>
using namespace std;

int n, a[101][101];

void sortare(int col) {
  for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j) {
      if (a[i][col] > a[j][col]) swap(a[i][col], a[j][col]);
    }
}

int main() {
  int m, k = 0;
  int ok;
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> a[i][j];

  for (int j = 0; j < m; ++j) {
    sortare(j);
    ok = 1;
    for (int i = 0; i < n; ++i) {
      if (a[i][j] == a[i - 1][j]) ok = 0;
      // cout << a[i][j] << " "; return 0;
    }
    if (ok) k++;
    // cout << endl;
  }
  cout << k;
}