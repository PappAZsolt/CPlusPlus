#include <iostream>
#include <string.h>
using namespace std;
int vocale(char c)
{
    char vocale[]="aeiou";
    if(strchr(vocale,c))
        return 1;
    return 0;
}
int consoane(char c)
{
    char consoane[]="bcdfghjklmnpqrstvxyz";
    if(strchr(consoane,c))
        return 1;
    return 0;
}
char a[255];
int i,counter;
int main()
{
    cin.getline(a,255);
    for(i=1;i<strlen(a)-1;i++)
        if(consoane(a[i-1])&&vocale(a[i])&&consoane(a[i+1]))
            counter++;
    cout<<counter;
    return 0;
}
