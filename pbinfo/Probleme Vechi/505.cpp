#include <algorithm>
#include <iostream>

using namespace std;

void ham(int n, int v[]) {
  for (int i = 1; i <= n; i++)
    for (int j = i + 1; j <= n; j++)
      if (v[i] < v[j]) swap(v[i], v[j]);
}

int main() {
  int n, a[1001], b[1001], ok1 = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int j = 1; j <= n; j++) cin >> b[j];

  ham(n,a);
  ham(n,b);

  for (int i = 1; i <= n; i++)
   {
       if (a[i]!=b[i])
      {
        cout << "NU";
        return 0;
      }
   }
  cout << "DA";
}