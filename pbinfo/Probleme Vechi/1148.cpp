#include <iostream>

using namespace std;

int Impar_div_imp(int a[], int st, int dr)
{
    if (st == dr)
    {
        if (a[st] % 2 != 0)
            return 1;
        return 0;
    }
    int m = (st + dr) / 2;
    return Impar_div_imp(a, st, m) + Impar_div_imp(a, m + 1, dr);
}

void Citire(int a[], int n)
{
    if (n == 0)
        return;
    Citire(a, n - 1);
    cin >> a[n];
}

int main()
{
    int n, a[101];
    cin >> n;
    Citire(a, n);
    if (Impar_div_imp(a, 1, n))
        cout << "DA";
    else
        cout << "NU";
}