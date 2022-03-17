#include <iostream>

using namespace std;

bool prim(int n)
{
    if (n == 2)
        return true;
    if (n == 0 or n == 1)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int Exista_Div_Imp(int a[], int st, int dr)
{
    if (st == dr)
    {
        if (prim(a[st]))
            return a[st];
        return 0;
    }
    int m = (st + dr) / 2;
    return Exista_Div_Imp(a, st, m) + Exista_Div_Imp(a, m + 1, dr);
}

void cit(int a[], int n)
{
    if (n == 0)
        return;
    cit(a, n - 1);
    cin >> a[n];
}

int main()
{
    int n, a[201];
    cin >> n;
    cit(a, n);
    if (Exista_Div_Imp(a, 1, n))
        cout << "DA";
    else
        cout << "NU";
}