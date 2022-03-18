#include <iostream>

using namespace std;

int sumfactcif(int n)
{
  int sum = 0;
  if (n == 0)
    return 1;
  while (n)
  {
    int fact = 1;
    int x = n % 10;
    if (x == 0)
      fact = 1;
    else
      for (int i = 1; i <= x; i++)
        fact *= i;
    sum += fact;
    n /= 10;
  }
  return sum;
}   

int main()
{
  int n;
  cin >> n;
  cout << sumfactcif(n);
}
