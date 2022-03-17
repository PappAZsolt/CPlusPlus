#include <iostream>

using namespace std;

int main() {
  int n, v[1001];
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> v[i];
  for (int i = 1; i <= n; i++)
    if (v[i] % 2 == 0) {
      int a = i;
      for (int i = a; i <= n; i++) v[i] = v[i + 1];
      n--;
      i--;
    }
  for (int i = 1; i <= n; i++) cout << v[i] << " ";
}