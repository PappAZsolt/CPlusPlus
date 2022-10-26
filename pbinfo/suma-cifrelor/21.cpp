#include <iostream>

using namespace std;

void sum_cif(int n, int &num)
{
  num = 0;
  while (n)
  {
    num += n % 10;
    n /= 10;
  }
}

int main()
{
  int n, num = 0;
  cin >> n;
  sum_cif(n, num);
  cout << num;
}