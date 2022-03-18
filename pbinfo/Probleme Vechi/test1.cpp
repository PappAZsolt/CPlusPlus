#include <fstream>

using namespace std;

ifstream cin("subgraf.in");
ofstream cout("subgraf.out");

int n, v[101][101],x,y;

int Prim(int n){
    if (n == 0 || n == 1)
     return 0;
    if (n == 2)
     return 1;
    if (n % 2 == 0)
     return 0;
    for (int i = 3; i*i <=n; i+=2){
        if (n % i == 0)
         return 0;
    }   
}

int main(){
    cin >> n;
    while (cin >> x >> y){
        if (!Prim(x) && !Prim(y))
         v[x][y] = v[y][x] = 1;
    }
    int cnt=0;
    for (int i=1;i<=n;i++)
     for (int j=1;j<=n;j++)
      cnt = cnt + v[i][j];
    cout << cnt / 2;  
}