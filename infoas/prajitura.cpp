#include <iostream>

using namespace std;

int main()
{
  int n, s;
  cin >> s >> n;
  cout << s / n << " " << ((s / n) + 1) * n - s;
}