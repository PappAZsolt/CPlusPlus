#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sirpie.in");
ofstream cout("sirpie.out");

int n, x[10], a[10], p[10];

int cmmdc(int x, int y)
{
    while (y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }

    if (x == 1)
        return 1;
    return 0;
}

void afisare()
{
    int ok = 0;
    for (int i = 1; i < n; i++)
        if (!cmmdc(a[x[i]], a[x[i + 1]]))
            ok = 1;
    if (ok == 0)
    {
        for (int i = 1; i <= n; i++)
            cout << a[x[i]] << " ";
        cout << endl;
    }
}

void back(int k)
{
    for (int i = 1; i <= n; i++)
        if (!p[i])
        {
            x[k] = i;
            p[i] = 1;
            if (k == n)
                afisare();
            else
                back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    back(1); ///incep generarea de la 1
    return 0;
}
