#include <iostream>

using namespace std;
int n, st[30], m;
char s[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void scrie()
{
  for (int i = 1; i <= m; i++)
    cout << s[st[i]];
  cout << '\n';
}

void back(int k)
{
  for (int i = st[k - 1] + 1; i <= n; i++)
  {
    st[k] = i;
    if (k == m)
      scrie();
    else
      back(k + 1);
  }
}

int main()
{
  cin >> n >> m;
  back(1);
  return 0;
}