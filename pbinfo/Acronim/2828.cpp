#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char cuv[101], *p;
  cin.getline(cuv, 101);
  p = strtok(cuv, " ");
  while (p != NULL)
  {
    for (int i = 0; i < strlen(p); i++)
      if (i == 0 and isupper(p[i]))
        cout << p[i];
    p = strtok(NULL, " ");
  }
}