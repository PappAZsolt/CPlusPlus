#include <fstream>

using namespace std;

// Se dau mai multe numere naturale formate din exact o cifră. Determinaţi cifrele cu număr maxim de apariţii.
/* 5 6 4 1 2
   5 7 2 */

ifstream fin("maxcif.in");
ofstream fout("maxcif.out");

int a[10];

int main()
{

  int max = 0;
  int num;
  while (fin >> num)
  {
    a[num]++;
  }

  for (int i = 0; i <= 10; i++)
  {
    if (a[i] > max)
      max = a[i];
  }
  for (int i = 0; i <= 10; i++)
    if (a[i] == max)
      fout << i << " ";
}