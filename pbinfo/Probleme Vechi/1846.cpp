#include <iostream>

using namespace std;

void ordonare(int a[], int n, int st, int dr)
{
    if (st == dr)
        return;
    for (int i = st; i < dr; ++i)
        if (a[i] > a[dr])
            swap(a[i], a[dr]);
    ordonare(a, n, st, dr - 1);
}

void Afisare(int a[], int n)
{
    if (n == 0)
        return;
    Afisare(a, n - 1);
    cout << a[n - 1] << ' ';
}
void Citire(int a[], int n)
{
    if (n == 0)
        return;
    Citire(a, n - 1);
    cin >> a[n - 1];
}

int main()
{
    int n, a[100], st, dr;
    cin >> n;
    Citire(a, n);
    Afisare(a, n);
    cout << '\n';
    cin >> st >> dr;
    ordonare(a, n, st, dr);
    Afisare(a, n);
}