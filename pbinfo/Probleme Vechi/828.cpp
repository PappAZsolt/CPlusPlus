#include <iostream>

using namespace std;

int mp(int x)
{
    if (x >= 12)
        return x - 1;
    else
        return (mp(mp(x + 2)));
}

int main()
{
    int n;
    cin >> n;
    cout << mp(n);
}