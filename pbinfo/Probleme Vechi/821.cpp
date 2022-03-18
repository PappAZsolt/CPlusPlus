#include <iostream>

using namespace std;

int cmmdc(int n, int m)
{
  if (n % m == 0)
    return m;
  else
    return cmmdc(m, n % m);
}
int main()
{
  int n, m;
  cin >> n >> m;
  cout << cmmdc(n, m);
}
