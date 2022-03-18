#include <iostream>

using namespace std;

void num(int n, int x[])
{
    if (n >= 0)
    {

        if (x[n] <= x[0])
            x[n] = 0;
        num(n - 1, x);
    }
}

int main()
{
    int n, v[101];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    num(n, v);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}