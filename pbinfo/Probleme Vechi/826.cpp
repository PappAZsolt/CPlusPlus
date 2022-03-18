#include <iostream>

using namespace std;
int cifminpar(int n)
{
    if (n < 10)
        if (n % 2 == 0)
            return n;
        else
            return -1;
    else
    {
        
        if (n % 2 == 1)
            return cifminpar(n / 10);
        else if (cifminpar(n / 10) < n % 10 && cifminpar(n / 10) != -1)
            return cifminpar(n / 10);
        else
            return n % 10;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << cifminpar(n);
}