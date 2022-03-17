#include <iostream>

using namespace std;

int main() {
  int n, v[1010];
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> v[i];
  for (int i = 1; i <= n; i++) cout << v[i] << " ";
  cout << '\n';

  for (int j = 1; j < n; ++j) {
    int x = v[1];
    for (int i = 2; i <= n; i++) v[i - 1] = v[i];
    v[n] = x;
    for (int i = 1; i <= n; i++) cout << v[i] << " ";
    cout << '\n';
  }
}