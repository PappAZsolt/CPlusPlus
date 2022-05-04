#include <iostream>

using namespace std;

void duplicare(int n, int &d)
{
  int ogl = 0;
  while (n)
  {
    int c = n % 10;
    if (c % 2 != 0)
    {
      ogl = ogl * 100 + c * 11;
    }
    else
      ogl = ogl * 10 + c;
    n /= 10;
  }
  while (ogl)
  {
    int c = ogl % 10;
    d = d * 10 + c;
    ogl /= 10;
  }
}

int main()
{
  int n, d = 0;
  cin >> n;
  duplicare(n, d);
  cout << d << endl;
}