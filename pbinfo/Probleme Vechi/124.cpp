#include <fstream>

using namespace std;

ifstream cin("permutari1.in");
ofstream cout("permutari1.out");

int n, x[10];

void Afisare()
{
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";
    cout << endl;
}

int Valid(int k)
{
    for (int i = 1; i < k; i++)
        if (x[i] == x[k])
            return 0;
    return 1;
}

void Back(int k)
{
    if (k > n)
        Afisare();
    else
    {
        for (int i = n; i >= 1; i--)
        {
            x[k] = i;
            if (Valid(k))
                Back(k + 1);
        }
    }
}

int main()
{
    cin >> n;
    Back(1);
    return 0;
}