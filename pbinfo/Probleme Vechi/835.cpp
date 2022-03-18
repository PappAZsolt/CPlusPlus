#include <iostream>

using namespace std;

void afisvec(int v[], int n)
{
  for (int i = 0; i < n; i++)
    cout << v[i] << ' ';
}

int main()
{
  int v[101], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  afisvec(v, n);
}