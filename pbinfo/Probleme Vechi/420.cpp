#include <fstream>
using namespace std;
int n, a[101][101],x,y,s;
ifstream cin("graf_partial.in");
ofstream cout("graf_partial.out");

int main()
{
 cin>>n;
 while(cin>>x>>y)
 {
     if((x+y)%2!=0)
     a[x][y]=a[y][x]=1;

 }
 for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    s+=a[i][j];
 cout<<s/2;

    return 0;
}