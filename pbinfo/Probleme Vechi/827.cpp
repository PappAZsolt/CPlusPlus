#include <iostream>

using namespace std;
int cifmaxpar(int n)
{
    if (n < 10)
        if (n % 2 == 0)
            return n;
        else
            return -1;
    else
    {
        ;
        if (n % 2 == 1)
            return cifmaxpar(n / 10);
        else if (cifmaxpar(n / 10) > n % 10 && cifmaxpar(n / 10) != -1)
            return cifmaxpar(n / 10);
        else
            return n % 10;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << cifmaxpar(n);
}