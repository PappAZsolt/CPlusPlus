#include <iostream>

using namespace std;

int suma(int a, int b)
{
  int s = 0;
  for (int i = 1; i <= a; i++)
  {
    if (a % i == 0 and b % i == 0)
      s += i;
  }
  return s;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << suma(a, b);
}