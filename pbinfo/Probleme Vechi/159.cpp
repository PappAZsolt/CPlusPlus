#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int k = 0;
  int v[n];
  for (int i = 0; i < n; ++i) {
    cin >> v[k];
    if (v[k] % 2 == 0) k++;
    k++;
  }
  for (int i = 0; i < k; ++i) {
    if (v[i] % 2 == 0) {
      v[i + 1] = v[i] * 2;
      i++;
    }
  }
  for (int i = 0; i < k; ++i) cout << v[i] << " ";
}