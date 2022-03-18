#include <iostream>

using namespace std;

int cnt = 0;
void cnt_cif(int n, int k, int &c)
{
  if (n == 0 && cnt == 0 && k == 0)
    c = 1;
  else if (n == 0)
    c = 0;
  else
  {
    cnt++;
    if (n % 10 >= k)
      cnt_cif(n / 10, k, c), c++;
    else
      cnt_cif(n / 10, k, c);
  }
}

int main()
{
  int n, k, c = 0;
  cin >> n >> k;
  cnt_cif(n, k, c);
  cout << c;
}
