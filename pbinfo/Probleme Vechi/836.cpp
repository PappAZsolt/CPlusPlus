#include <iostream>

using namespace std;

void afisvec(int v[], int n)
{
  if (n > 0)
  {
    cout << v[n - 1] << ' ';
    afisvec(v, n - 1);
  }
}

int main()
{
  int v[101], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  afisvec(v, n);
}