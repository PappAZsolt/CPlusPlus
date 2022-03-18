#include <iostream>

using namespace std;

int cifmax(int n)
{
  if (n == 0)
    return 0;
  else
    return max(n % 10, cifmax(n / 10));
}

int main()
{
  int n;
  cin >> n;
  cout << cifmax(n);
}