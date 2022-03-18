#include <iostream>

using namespace std;
int n, st[30], m;
char s[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int Valid(int k)
{
  int i;
  for (i = 1; i < k; i++)
    if (st[i] == st[k])
      return 0;
  return 1;
}

void scrie()
{
  for (int i = 1; i <= m; i++)
    cout << s[st[i]];
  cout << '\n';
}

void Backtracking(int k)
{
  if (k > m)
    scrie();
  else
  {
    int i;
    for (i = 1; i <= n; i++)
    {
      st[k] = i;
      if (Valid(k))
        Backtracking(k + 1);
    }
  }
}

int main()
{
  cin >> n >> m;
  Backtracking(1);
  return 0;
}