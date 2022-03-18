#include <iostream>

using namespace std;

int main() {
  int n, m, a[101][101];
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> a[i][j];
  int sum = 0;
  int max = 0;
  for (int i = 1; i <= n; i++) {
    sum = 0;
    max=0; 
    for (int j = 1; j <= m; j++) {
      sum += a[i][j];
      if (a[i][j] > max) max = a[i][j];
    }
    cout<<sum-max<<" ";
  }
}