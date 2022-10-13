#include <iostream>

using namespace std;

int main()
{
  int h1, m1, h2, m2;
  cin >> h1 >> m1 >> h2 >> m2;
  int minut = m2 - m1;
  int ora = (h2 - h1) * 60;
  cout << minut + ora;
}