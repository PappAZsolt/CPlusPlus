#include <iostream>
using namespace std;
bool prim;

int main() {
  int n, v[1001], a;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> v[i];
  for (int i = 1; i <= n; i++) {
    prim = true;
    if (v[i] == 0 || v[i] == 1)
      prim = false;
    else if (v[i] == 2)
      prim = true;
    else if (v[i] % 2 == 0)
      prim = false;
    else
      for (int j = 3; j * j <= v[i]; j++)
        if (v[i] % j == 0) prim = false;
    if (prim == true) {
      a = i;
      for (int k = a; k < n; k++) v[k] = v[k + 1];
      n--;
      i--;
    }
  }
  for (int i = 1; i <= n; i++) cout << v[i] << " ";

  return 0;
}