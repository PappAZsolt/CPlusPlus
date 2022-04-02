#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char text[101];
  cin.get(text, 101);

  text[0] = toupper(text[0]);

  for (int i = 0, n = strlen(text); i < n; i++)
  {
    if (isspace(text[i + 1]) or text[i + 1] == NULL)
    {
      text[i] = toupper(text[i]);
      text[i + 2] = toupper(text[i + 2]);
    }
  }
  cout << text << '\n';
}