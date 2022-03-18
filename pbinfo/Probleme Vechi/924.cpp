#include <iostream>

using namespace std;

int multiplu(int a[], int n, int k)
{
    if (n == 0)
        return 0;
    if (a[n - 1] % k == 0 and a[n - 1] % 10 == k)
        return 1 + multiplu(a, n - 1, k);
    return multiplu(a, n - 1, k);
}

int main()
{
    int n, a[101], k;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    cout << multiplu(a, n, k);
}

// 6 9 273 63 83 93 123 3