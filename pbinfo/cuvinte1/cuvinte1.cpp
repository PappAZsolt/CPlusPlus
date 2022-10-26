#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char cuv[256], *p;
  cin.getline(cuv, 256);
  p = strtok(cuv, " ");
  while (p)
  {
    bool test = true;
    for (int i = 0; i < strlen(p); i++)
      if (strchr("aeiou", p[i]) == NULL) // daca gaseste consoana
      {
        test = false;
      }
    if (test)
      cout << p << endl;
    p = strtok(NULL, " ");
  }
}