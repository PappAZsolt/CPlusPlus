#include <iostream>
#include <algorithm>

using namespace std;

int n, m, x[10], a[10], rez;

int valid(int k)
{
    if (k == 1 && x[k] != 0)
        return 1;
    if (abs(x[k] - x[k - 1]) > 1)
        return 1;
    else
        return 0;
}

void afisare()
{
    for (int i = 1; i <= n; i++)
        cout << x[i];
    cout << '\n';
}

void back(int k)
{
    for (int i = 0; i < m; ++i)
    {
        x[k] = i;
        if (valid(k))
        {
            if (k == n)
                afisare();
            else
                back(k + 1);
        }
    }
}
int main()
{
    cin >> n >> m;
    back(1);
}
