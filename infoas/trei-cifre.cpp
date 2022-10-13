#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  int b = (a / 100) * 100 + (a % 10) * 10 + (a / 10) % 10;
  cout << b;
}