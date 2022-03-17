#include <iostream>

using namespace std;

void nr_cif_zero(int n, int &nr)
{
  int cnt = 0;
  if (n == 0)
    cnt++;
  while (n)
  {
    if (n % 10 == 0)
      cnt++;
    n /= 10;
  }
  nr = cnt;
}

int main()
{
  int n, nr = 0;
  cin >> n;
  nr_cif_zero(n, nr);
  cout << nr;
}