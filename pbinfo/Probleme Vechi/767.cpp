#include <iostream>

using namespace std;

int main() {
  int n, v[101][101], m, s = 0;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) {
      cin >> v[i][j];
      if (v[i][j] % 2 == 0) s += v[i][j];
    }
  cout << s;
}