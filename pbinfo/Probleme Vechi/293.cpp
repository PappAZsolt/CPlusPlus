#include <iostream>
using namespace std;

int n, a[101];

int main() {
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> a[i];
  int ok = 1;

  for (int i = 0; i < n; ++i) {
    int v[10] = {0}, x = a[i];
    while (x) v[x % 10]++, x /= 10;

    for (int k = 0; k < 10; ++k)
      if (v[k] > 1) ok = 0;
  }

  if (ok)
    cout << "DA";
  else
    cout << "NU";

  return 0;
}
