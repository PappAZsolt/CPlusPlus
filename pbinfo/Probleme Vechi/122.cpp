#include <iostream>

using namespace std;

int main() {
  int a, b, cnta = 0, cntb = 0;
  cin >> a >> b;
  int memA = a;
  int memB = b;
  while (a) {
    cnta += a % 2;
    a /= 10;
  }
  while (b) {
    cntb += b % 2;
    b /= 10;
  }
  if (cnta == cntb)
    cout << min(memA, memB);
  else if (cnta > cntb)
    cout << memA;
  else
    cout << memB;
}