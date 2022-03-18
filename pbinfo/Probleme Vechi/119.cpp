#include <climits>
#include <iostream>

using namespace std;

int minim(int x) {
  while (x > 9) x /= 10;
  return x;
}

int main() {
  int n, x;
  int max = INT_MAX;
  int min2 = INT_MAX;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> x;
  }