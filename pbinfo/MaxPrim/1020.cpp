#include <iostream>

using namespace std;
int a[10001];
int maxi = -9999;
int prim(int n)
{
    if (n == 2)
        return true;
    if (n == 0 or n == 1)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int maxprim(int st, int dr)
{
    if (st == dr)
    {
        if (prim(a[st]))
            return a[st];
        return 0;
    }
    int m = (st + dr) / 2;
    int stanga = maxprim(st, m);
    int dreapta = maxprim(m + 1, dr);
    if (stanga > dreapta)
        return stanga;
    return dreapta;
}
void citire(int n)
{
    if (n == 0)
        return;
    citire(n - 1);
    cin >> a[n];
}

int main()
{
    int n;
    cin >> n;
    citire(n);
    cout << maxprim(1, n);
}