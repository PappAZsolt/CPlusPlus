#include <iostream>

using namespace std;

int v[999] = {0};
int main() {
  int n, x, a, b;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    if (x < 1000) v[x] = 1;
  }
  int cnt = 0;
  for (int i = 999; cnt < 2 and i >= 100; i--) {
    if (v[i] == 0) {
      cnt++;
      if (cnt == 1) {
        b = i;
      } else
        a = i;
    }
  }
  if (cnt == 2)
    cout << a << " " << b;
  else
    cout << "NU EXISTA";
}