#include <iostream>

using namespace std;

int suma(int v[], int n, int i, int j)
{
  if (n == 0)
    return 0;
  if (i <= n and j >= n)
    return suma(v, n - 1, i, j);
  return v[n] + suma(v, n - 1, i, j);
}

int main()
{
  int n, i, j, v[101];
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  cin >> i;
  cin >> j;
  cout << suma(v, n, i, j);
}

//6 12 7 6 3 8 5 2 4