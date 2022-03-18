#include <iostream>
using namespace std;

long long n, cif[11], st[11], j, nr, s;

void generare_numar(long long &s) {
  int nr = 0;
  for (int i = 1; i <= j; ++i) nr = nr * 10 + cif[st[i]];
  s += nr;
}

bool valid(int k) {
  for (int i = 1; i < k; ++i)
    if (st[i] == st[k]) return false;
  return true;
}

void back(int k) {
  for (int i = 1; i <= j; ++i) {
    st[k] = i;
    if (valid(k))
      if (k == j)
        generare_numar(s);
      else
        back(k + 1);
  }
}

int main() {
  cin >> n;

  while (n) {
    cif[++j] = n % 10;
    n /= 10;
  }
  back(1);
  cout << s;
  return 0;
}