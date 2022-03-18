#include <iostream>

using namespace std;

void afis()
{
  int cnt = 0;
  int a[101];
  for (int i = 0;; i++)
  {
    cin >> a[i];
    cnt++;
    if (a[i] == 0)
      break;
  }

  for (int i = cnt - 1; i >= 0; i--)
    cout << a[i] << " ";
}

int main()
{
  afis();
}