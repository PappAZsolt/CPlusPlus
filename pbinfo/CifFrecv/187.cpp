#include <fstream>

using namespace std;

ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");

int frecv[10];

int main()
{
  int number, max = 0, num = 0;
  while (fin >> number)
  {
    frecv[number]++;
  }

  for (int i = 0; i <= 10; i++)
  {
    if (frecv[i] > max and i != 0 and i != 1 and i % 2 != 0)
    {
      max = frecv[i];
      num = i;
    }
  }

  fout << num << " " << max;
}