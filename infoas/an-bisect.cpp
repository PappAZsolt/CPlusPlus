#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  if ((n % 4 == 0 or n % 400 == 0) and n % 100 != 0)
    cout << "DA";
  else
    cout << "NU";
}