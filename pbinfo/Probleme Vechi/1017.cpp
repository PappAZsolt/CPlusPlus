#include <iostream>

using namespace std;

int Sum_par_div(int a[], int st, int dr)
{
    if (st == dr)
    {
        if (a[st] % 2 == 0)
            return a[st];
        return 0;
    }
    int m = (st + dr) / 2;
    return Sum_par_div(a, st, m) + Sum_par_div(a, m + 1, dr);
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
    int a[1001], n;
    cin >> n;
    Citire(a, n);
    cout << Sum_par_div(a, 1, n);
}