#include <iostream>
using namespace std;

int multipli (int a, int b, int c)
{
  int cnt = b/c - a/c;
  if (a%c == 0) cnt++;
  return cnt;
}
int main ()
{
  int a,b,c;
  cin>>a>>b>>c;
  cout<<multipli(a,b,c);
}
