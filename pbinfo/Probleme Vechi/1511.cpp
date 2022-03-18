#include <iostream>

using namespace std;

int cnt;
int cautare(int n, double x[], double v)
{
    if (x[n - 1] == v)
        return n - 1;
    if (x[n - 1] > v)
        cautare(n - 1, x, v);
    else
        return -1;
}
int main()
{
    int n;
    double x[101], v;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cin >> v;
    cout << cautare(n, x, v);
}