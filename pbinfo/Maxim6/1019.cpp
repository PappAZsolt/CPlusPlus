#include <iostream>

using namespace std;

int a[1001];

int maxim(int st, int dr)
{
  if (st > dr)
    return -1;
  if (st == dr)
    return a[st];
  /* if (st + 1 == dr)
  {
    if (a[st] > a[dr])
      return a[st];
    return a[dr];
  } */
  int m = (st + dr) / 2;
  int ls = maxim(st, m);
  int ld = maxim(m + 1, dr);
  if (ls > ld)
    return ls;
  return ld;
}

void citire(int a[], int n)
{
  if (n == 0)
    return;
  citire(a, n - 1);
  cin >> a[n];
}

int main()
{

  int n;
  cin >> n;
  citire(a, n);
  cout << maxim(1, n);
}