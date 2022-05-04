#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("numere.in");

int main()
{
  int n;
  cin >> n;
  int aux = 0;
  int num;
  int numDif = 0;
  while (num != 0)
  {
    cin >> num;
    if (aux != num)
      numDif++;
    aux = num;
  }
  cout << numDif << '\n';
}