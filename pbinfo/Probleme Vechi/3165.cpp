#include <iostream>

using namespace std;

long long Div_sum_par(int a[], int st, long long dr)
{
    if (st == dr)
    {
        if (a[st] % 2 == 0)
            return a[st];
        return 0;
    }

    long long m = (st + dr) / 2;
    return Div_sum_par(a, st, m) + Div_sum_par(a, m + 1, dr);
}

void read(int a[], long long d)
{
    if (d == 0)
        return;
    read(a, d - 1);
    cin >> a[d];
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[10000];
    read(a, n * m);
    cout << Div_sum_par(a, 1, n * m);
}