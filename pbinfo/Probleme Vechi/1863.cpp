#include <iostream>

using namespace std;

int numarare(int v[], int n)
{
  int cnt = 0;
  if (n == 0)
    return 0;
  if (v[n - 1] == v[n - 2])
    return 1 + numarare(v, n - 1);
  return numarare(v, n - 1);
}

int main()
{
  int n, v[101];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  cout << numarare(v, n);
}