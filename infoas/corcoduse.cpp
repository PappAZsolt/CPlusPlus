#include <iostream>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  if (n + m >= 20)
    cout << n + m << " "
         << "de corcoduse";
  else
    cout << n + m << " "
         << "corcoduse";
}