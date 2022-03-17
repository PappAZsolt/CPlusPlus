#include <iostream>
#include <cmath>

using namespace std;
int prim(int a)
{
  int ok=1;
  if (a==0 || a==1)
   ok=0;
  else if (a==2)
   ok=1;
  else if (a%2==0)
   ok=0;
  else for (int i=3;i*i<=a;i+=2)
  if (a%i==0)
   {
     ok=0;
     break;
   }
   return ok;
}
int a_prim(int n)
{

  for (int i=2;i<=n/2;i++)
   {
     if (n%i==0)
      {
        if (prim(i)==1 && prim(n/i)==1)
        return 1;

        return 0;
      }
   }

}
