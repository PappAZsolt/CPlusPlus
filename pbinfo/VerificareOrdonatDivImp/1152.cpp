#include <iostream>

using namespace std;

int verificare(int a[], int st, int dr)
{
  if (st == dr)
    return 1;
  int m = (st + dr) / 2;
  int stanga = verificare(a, st, m);
  int dreapta = verificare(a, m + 1, dr);
  if (stanga == dreapta and a[m] <= a[m + 1])
    return 1;
  return 0;
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
  if (verificare(a, 1, n))
    cout << "DA";
  else
    cout << "NU";
}