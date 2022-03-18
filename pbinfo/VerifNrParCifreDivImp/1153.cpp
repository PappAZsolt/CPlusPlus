#include <iostream>

using namespace std;

int par(int n)
{
  int cnt = 0;
  while (n)
  {
    cnt++;
    n /= 10;
  }
  return !(cnt % 2);
}

int verif(int a[], int st, int dr)
{
  if (st == dr)
    return (par(a[st]));
  int m = (st + dr) / 2;
  return verif(a, st, m) and verif(a, m + 1, dr);
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
  int a[1001];
  int n;
  cin >> n;
  citire(a, n);
  if (verif(a, 1, n))
    cout << "DA";
  else
    cout << "NU";
}