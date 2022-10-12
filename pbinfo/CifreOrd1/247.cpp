#include <fstream>

using namespace std;

ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");

int a[10001];

int main()
{
  int temp = 0;
  int x;
  while (fin >> x)
  {
    temp = x;
    while (temp)
    {
      a[temp % 10]++;
      temp /= 10;
    }
  }
  int ok = 0;
  for (int i = 9; i >= 0; i--)
  {
  }
}
}