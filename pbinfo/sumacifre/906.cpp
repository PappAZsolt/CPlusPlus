#include <iostream>

using namespace std;

void sumcif(int n, int &s, int &t)
{
  s = 0;
  t = 0;
  while (n)
  {
    int c = n % 10;
    if (c % 2 == 0)
      s += c;
    else
      t += c;
    n /= 10;
  }
}

int main()
{
  int n, s, t;
  cin >> n;
  sumcif(n, s, t);
  cout << s << " " << t;
}