#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n > 0 and n < 5)
    cout << "PRIMAR";
  else if (n > 4 and n < 9)
    cout << "GIMNAZIU";
  else if (n > 8 and n < 13)
    cout << "LICEU";
}