#include <iostream>

using namespace std;

void citire(int n, int v[]) {
  for (int i = 1; i <= n; i++) cin >> v[i];
}

int main() {
  int n, m, a[1001], b[1001], k;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  cin >> m;
  for (int j = 1; j <= m; j++) cin >> b[j];
  for (int j = 1; j <= m; j++) {
    k = 0;
    for (int i = 1; i <= n; i++) {
      if (a[i] == b[j]) {
        k++;
        break;
      }
    }
    if (k > 0)
      cout << "1"
           << " ";
    else
      cout << "0"
           << " ";
  }
}