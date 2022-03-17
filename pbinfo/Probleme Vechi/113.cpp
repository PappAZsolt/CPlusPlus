#include<iostream>

using namespace std;
int a,b;
int nr_cif(int a, int b)
{
    int x;
    while(a!=0){
        if( (a%10)!=0 && b%(a%10) == 0 )
        x++;
        a/=10;
    }
    return x;
}
int main ()
{
  int n,k;
  cin>>n;
  cout<<nr_cif(a,b);
}
