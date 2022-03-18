#include <iostream>
#include <cstring>

using namespace std;
int IndexOf(char s[], char ch)
{
  for (int i=0;i<strlen(s);++i)
   {
     if (s[i]==ch)
      return i;}
    return -1;
}
int LastIndexOf(char s[],char ch1)
{
  for (int i=strlen(s)-1;i>=0;--i)
   {
     if (s[i]==ch1)
      return i;

   }
   return -1;
}
int NthIndex(char s[], char ch3, int k)
{
    int i, g = 0;
    for( i = 0; i< strlen(s);i++)
    {
        if(s[i]==ch3)
        g++;
        if(g==k)
        return i;
    }
    return -1;
}


int main ()
{
  char s[51];
  char ch;
  char ch1;
  char ch3;
  int k;
  cin.get(s,51);
  cin>>ch;
  cin>>ch1;
  cin>>ch3;
  cin>>k;
  cout<<IndexOf(s,ch);
  cout<<endl;
  cout<<LastIndexOf(s,ch1);
  cout<<endl;
  cout<<NthIndex(s,ch3,k);
}
