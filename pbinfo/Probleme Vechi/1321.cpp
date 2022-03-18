#include <iostream>

using namespace std;

int main() {
  int n, max = 0, v[1001];
  bool max1, max2;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> v[i];
  max1 = max2 = false;
  for (int i = 0; i < n-1; i++)
    if (v[i] == v[i + 1]) {
      cout << "NU";
      return 0;
    } else if (v[i] > v[i + 1])
      if (max1) {
        max2 = true;
      } else {
        cout << "NU";
        return 0;
      }
    else if (v[i] < v[i + 1])
      if (!max2)
        max1 = true;
      else {
        cout << "NU";
        return 0;
      }
  if (max1 and max2)
    cout << "DA";
  else
    cout << "NU";
}