#include <iostream>

using namespace std;

int NrDiv(int n)
{
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
      cnt += 2;
    if (i * i == n)
      cnt--;
  }
  return cnt;
}

int NextNrDiv(int n)
{
  for (int i = n + 1; i; i++)
    if (NrDiv(i) == NrDiv(n))
      return i;
  return -1;
}

int PrevNrDiv(int n)
{
  for (int i = n - 1; i >= 1; i--)
    if (NrDiv(i) == NrDiv(n))
      return i;
  return -1;
}

int main()
{
  int n;
  cin >> n;
  cout << NrDiv(n);
  cout << '\n';
  cout << NextNrDiv(n);
  cout << '\n';
  cout << PrevNrDiv(n);
}