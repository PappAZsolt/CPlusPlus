#include <iostream>

using namespace std;

int n, c, t, a1, a2;
int main()
{
  cin >> n;
  cin >> a1;
  for (int i = 1; i < n; i++)
  {
    cin >> a2;
    if (a1 < a2)
    {
      ++t;
      c += a2 - a1;
      a2 = a1;
    }
    a1 = a2;
  }
  cout << t << " " << c;
}