#include <iostream>

using namespace std;

int cntimpar(int a[], int st, int dr)
{
    if (st == dr)
    {
        if (a[st] % 2 != 0)
            return 1;
        return 0;
    }
    int m = (st + dr) / 2;
    return cntimpar(a, st, m) + cntimpar(a, m + 1, dr);
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
    int n, a[101];
    cin >> n;
    cit(a, n);
    cout << cntimpar(a, 1, n);
}