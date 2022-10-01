#include <fstream>

using namespace std;

ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");

int a[100000];

int main()
{
  int x;
  while (fin >> x)
  {
    if (x < 1000)
      a[x]++;
  }
  int cnt = 0;
  for (int i = 999; i >= 100; i--)
    if (a[i] == 0 and cnt < 2)
    {
      fout << i << " ";
      cnt++;
    }
  if (cnt != 2)
    fout << "NU";
}