#include <iostream>

using namespace std;

int fr[101];

int main() {
  int n, m, max = 0, a[101][101], maxi = 0, rasp[100];
  cin >> n;
  cin >> m;
  int cnt = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
      fr[a[i][j]]++;
      if (a[i][j] > max) max = a[i][j];
    }
  for (int i = 1; i <= max; i++)
    if (fr[i] == maxi) {
      cnt++;
      rasp[cnt] = i;
    }
  for (int i = 1; i <= cnt; i++) cout << rasp[i] << " ";
}