#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  int a;
  cin >> a;
  a++;
  while (sqrt(a) != ((int)sqrt(a)))
  {
    a++;
  }
  cout << a;
}