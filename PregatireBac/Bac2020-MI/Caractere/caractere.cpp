#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("text.in");

char text[101], *p;
char schimb[101];
int n;
int main()
{
  fin >> n;
  fin.getline(text, 101);
  p = strtok(text, " ");
  while (p)
  {
    if (strlen(p) < n)
      strcpy(schimb, p);
    else
      cout << p << '\n';
    p = strtok(NULL, " ");
  }
  cout << schimb << endl;
}