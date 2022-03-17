#include <iostream>

using namespace std;
int minDivPrim(int n){
    int p=1,i=2;
    if(n%i == 0){
        while(n%i==0)
            n/=i;
        p*=i;
    }
    i= 3;
    while(n!=1){
        if(n%i == 0){
            while(n%i==0)
                n/=i;
            p*=i;
        }
        i+=2;
    }
    return p;
}
int main ()
{
  int n;
  cin>>n;
  cout<<minDivPrim(n);
}
