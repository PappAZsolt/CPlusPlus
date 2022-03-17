#include <iostream>
using namespace std;

int sum_cifra_control(int a, int b)
{
    int  i, c=0, j;
    for(i=a; i<=b; i++)
    {
        j=i;
        j = j % 9;
        if (j == 0)
            j = 9;
        if(j==a)
            c++;
    }
    return c;
}

int main()
{
    int a, b;

    cin >> a >> b;
    cout << sum_cifra_control(a, b);
}
