#include <iostream>

using namespace std;
int Egal(int n)
{
  int u,c=-1;
  while (n)
  {
    u=n%10;
    if (u%2!=0)
     {
       if (c==-1)
        {
          c=u;
        }
        else if (c!=u)
         return 0;
     }
     n/=10;
  }
  return 1;
}

int main ()
{
  int n;
  cin>>n;
  cout<<Egal(n);

}
