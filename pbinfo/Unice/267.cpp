#include <fstream>

using namespace std;

ifstream fin("unice.in");
ofstream fout("unice.out");

int a[100];

int main()
{
  int n, x;
  fin >> n;
  do
  {
    fin >> x;
    a[x]++;
    n--;
  } while (n);
  for (int i = 0; i <= 100; i++)
    if (a[i] == 1)
      fout << i << " ";
}