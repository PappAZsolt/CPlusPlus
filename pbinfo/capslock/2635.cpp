#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
  char s[256];
  fin.getline(s, 256);
  int caps = 0;
  for (int i = 0; i < strlen(s); i++)
    if (s[i] == '#')
    {
      int j = i + 1;
      while (s[j] and s[j] != '#')
      {
        s[j] = toupper(s[j]);
        j++;
      }
      i = j;
    }
  for (int i = 0; i < strlen(s); i++)
    if (s[i] != '#')
      fout << s[i];
  return 0;
}