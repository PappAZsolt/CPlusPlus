#include <fstream>

using namespace std;

ifstream cin("graf_complet.in");
ofstream cout("graf_complet.out");

int a[51][51];
int nr;
int n;

bool ok()
{cin >> n;
 for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (i == j)
                {if(a[i][j] != 0) return false;}
                else if (a[i][j] != 1)
                    return false;
            }
 return true;
}

int main()
{
    cin >> nr;
    for (int d = 1; d <= nr; d++)
    if (ok()==true)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
}