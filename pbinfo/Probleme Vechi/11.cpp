#include <iostream>
#include <cstring>

using namespace std;
int main ()
{
  char a[21];
  char voc[]="aeiou";
  cin.get(a,21);
  for (int i=0;i<strlen(a);++i)
   {
     if (strchr(voc,a[i]))
      {
        a[i]=a[i]-32;
      }
   }
   cout<<a;
}
