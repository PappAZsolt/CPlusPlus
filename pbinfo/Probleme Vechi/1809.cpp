#include <iostream>

using namespace std;

int P(int a, int b)
{
    if (b == 1)
        return a;
    return a * P(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << P(a, b);
}