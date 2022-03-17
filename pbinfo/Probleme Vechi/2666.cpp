#include <iostream>
#include <cstring>

using namespace std;

void Trim(char a[])
{
    int i=1;
    int ok=false;
    int poz1 , poz2;
    while(a[i]!='\0')
    {
        if(a[i]!=' ' && ok==false)
            ok=true , poz1=i;
        if(a[i]!=' ')
            poz2=i;
        i++;
    }
    for(int i=poz1;i<=poz2;++i)
        a[i-poz1]=a[i];
    a[poz2-poz1+1]='\0';
}
int main ()
{
  char a[101];
  cin.getline(a,101);
  Trim(a);
  cout<<a;
}
