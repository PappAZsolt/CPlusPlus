#include <iostream>

using namespace std;
int nr_prim(int n){
    int i,j,nr = n+1;
    for(i=2;i*i<=nr;i++){
        if(nr%i == 0){
            nr++;

        }
    }
    return nr;
}

int main ()
{
  int n;
  cin>>n;
  cout<<nr_prim(n);
}
