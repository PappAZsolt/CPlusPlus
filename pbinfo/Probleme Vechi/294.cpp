#include <iostream>

using namespace std;

int ogl(int n) {
  int ogl = 0;
  while (n) {
    ogl = ogl * 10 + n % 10;
    n /= 10;
  }
  return ogl;
}

int main() {
  int n, v[1001];
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> v[i];

  int m = ogl(v[1]);

  for (int i = 2; i <= n; i++) {
    if (m == v[i]) {
      cout << "DA";
      return 0;
    }
  }
  cout << "NU";
}