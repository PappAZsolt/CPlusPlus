#include <cstring>
#include <iostream>

using namespace std;

bool palindrom(char *c)
{
  int l = strlen(c);
  for (int i = 0; i < l / 2; ++i)
    if (c[i] != c[l - i - 1])
      return false;
  return true;
}

int main()
{
  char sep[] = " ,.";
  char cuv[256], *p;
  char vectorCuv[256][256];
  int ok = 0, nr = 0;
  cin.getline(cuv, 256);
  p = strtok(cuv, sep);
  while (p)
  {
    strcpy(vectorCuv[nr], p);
    nr++;
    p = strtok(NULL, sep);
  }

  for (int i = 0; i < nr; i++)
  {
    for (int j = i + 1; j < nr; j++)
    {
      if (strcmp(vectorCuv[i], vectorCuv[j]) > 0)
      {
        char aux[10];
        strcpy(aux, vectorCuv[i]);
        strcpy(vectorCuv[i], vectorCuv[j]);
        strcpy(vectorCuv[j], aux);
      }
    }
  }
  for (int i = 0; i < nr; i++)
  {
    if (palindrom(vectorCuv[i]) == true)
    {
      cout << vectorCuv[i];
      return 0;
      ok = 1;
    }
  }
  if (ok != 1)
    cout << "IMPOSIBIL";
}
