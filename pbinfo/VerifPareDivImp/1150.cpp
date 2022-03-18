#include <iostream>
using namespace std;

int verif(int a[], int st, int dr)
{
    if (st == dr)
    {
        if (a[st] % 2 != 0)
            return 1;
        return 0;
    }
    int m = (st + dr) / 2;
    return verif(a, st, m) + verif(a, m + 1, dr);
}

void citire(int a[], int n)
{
    if (n == 0)
        return;
    citire(a, n - 1);
    cin >> a[n];
}

int main()
{
    int n, a[101];
    cin >> n;
    citire(a, n);
    if (verif(a, 1, n) == false)
        cout << "DA";
    else
        cout << "NU";
}
