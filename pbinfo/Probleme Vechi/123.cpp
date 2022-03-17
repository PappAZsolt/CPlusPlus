#include <fstream>

using namespace std;

ifstream cin("permutari.in");
ofstream cout("permutari.out");

int n, x[10];

void scrie()
{
    for (int j = 1; j <= n; ++j)
        cout << x[j] << " ";
    cout << endl;
}

bool verificare(int k)
{
    for (int i = 1; i < k; i++)
        if (x[k] == x[i])
            return false;
    return true;
}

bool solutie(int k)
{
    return k == n;
}

void back(int k)
{
    for (int i = 1; i <= n; i++)
    {
        x[k] = i;
        if (verificare(k))
            if (solutie(k))
                scrie();
            else
                back(k + 1);
    }
}

int main()
{
    cin >> n;
    back(1);
    return 0;
}