#include <iostream>

using namespace std;

int main()
{
  long long n;
  cin >> n;
  int temp = n / 3 + n / 5 - n / 15;
  cout << n - temp;
}