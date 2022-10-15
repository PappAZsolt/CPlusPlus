#include <iostream>

using namespace std;

int main()
{
  int ht, mt, h2, m2;
  cin >> ht >> mt >> h2 >> m2;
  int timpInceput = h2 * 60 + m2 - (ht * 60 + mt);
  int h1 = timpInceput / 60;
  int m1 = timpInceput % 60;
  cout << h1 << " " << m1;
}