#include <fstream>

using namespace std;

ifstream fin("numere8.in");
ofstream fout("numere8.out");

int v[10001];
int main() {
  int n;
  while (fin >> n)
    if (n <= 9999) v[n] = 1;

  for (int i = 9999; i >= 1; i--)
    if (v[i] == 0) fout << i << " ";
}