#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("text.in");
ofstream cout("text.out");

int main()
{
  char voc[] = "aeou";
  int ok = 0;
  char cuv[101];
  cin >> cuv;
  for (int i = 0; i <= strlen(cuv); i++)
  {
    int temp = cuv[i];
    if (strchr(voc,temp))
    {cout << "NU";
      return 0;}
    if (strchr(temp, "i"))
       ok++;
  }

  if (ok != 0)
    cout << "DA";
  else 
    cout << "NU";
}
