#include <cstring>
#include <iostream>

using namespace std;

char text[251], x[251], *p;
int main()
{
  cin.getline(text, 251);
  cin >> x;
  strcat(x, " ");
  p = strtok(text, ";");
  while (p)
  {
    if (strstr(p, x))
    {
      do
      {
        p++;
      } while (p[0] != ' ');
      cout << p << ' ';
    }
    p = strtok(NULL, ";");
  }
  cout << '\n';
}