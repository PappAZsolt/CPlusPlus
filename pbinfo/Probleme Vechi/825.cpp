#include <iostream>

using namespace std;

int cnt = 0;
int cifmin(int n)
{
  if (n == 0 && cnt == 0)
    return 0;
  else if (n == 0)
    return 9;
  else
  {
    cnt++;
    return min(n % 10, cifmin(n / 10));
  }
}

int main()
{
  int n;
  cin >> n;
  cout << cifmin(n);
}