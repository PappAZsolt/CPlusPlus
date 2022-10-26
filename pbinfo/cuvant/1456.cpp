#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  int ok = 0;
  char cuv[101];
  cin >> cuv;
  char temp;
  for (int i = 0; i < strlen(cuv); i++)
  {
    temp = cuv[i];
    if (strchr("aeou", temp) != NULL)
    {
      cout << "NU" << endl;
      return 0;
    }
    if (strchr("i", temp) == NULL)
    {
      ok = 1;
    }
  }
  if (ok != 0)
    cout << "DA";
  else
    cout << "NU";
  cout << endl;
}