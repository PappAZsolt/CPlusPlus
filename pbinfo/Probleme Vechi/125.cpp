#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("permutari2.in");
ofstream cout("permutari2.out");

int n, x[10], p[10], a[10];

void Afisare()
{
    for (int i = 1; i <= n; i++)
        cout << a[x[i]] << " ";
    cout << endl;
}

void back(int k) ///k = poz la care am ajuns
{
    for (int i = 1; i <= n; i++) ///de unde se ia x[k]
        if (!p[i])               ///daca nu e pus anterior
        {
            x[k] = i; ///pun elementul
            p[i] = 1; ///l am folosit pe i
            if (k == n)
                Afisare(); ///solutie
            else
                back(k + 1); ///trec la poz urmatoare
            p[i] = 0;        ///marchez ca nefolosit
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