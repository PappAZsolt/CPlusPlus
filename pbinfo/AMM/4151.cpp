#include <iostream>

using namespace std;

int main()
{
  int max = 0, min = 1000000, pozmin, pozmax;
  int a[1001];
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++)
  {
    if (min > a[i])
    {
      min = a[i];
      pozmin = i;
    }
    else if (max < a[i])
    {
      max = a[i];
      pozmin = i;
    }
  }
  if (pozmin > pozmax)
    swap(pozmin, pozmax);
  for (int i = pozmin; i <= pozmax; i++)
    cout << a[i] << " ";
}