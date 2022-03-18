#include <cmath>
#include <iostream>

using namespace std;
bool VerPatrat(int n) {
  if ((int)sqrt(n) == sqrt(n)) return true;
  return false;
}

int main() {
  int n;
  int v[1001];
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> v[i];
  for (int i = 1; i <= n; i++) {
    int x = v[i];
    int r = sqrt(x);
    if (VerPatrat(v[i]) == true) {
      n++;
      for (int j = n; j > i; j--) v[j] = v[j - 1];
      v[i] = sqrt(x);
      i++;
    }
  }
  for (int i = 1; i <= n; i++) cout << v[i] << " ";
}