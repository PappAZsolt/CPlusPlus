#include <iostream>

using namespace std;

void P(int x[], int n, int &mini, int &maxi, int &sum)
{
    if (n == 1)
        mini = maxi = sum = x[0];
    else
    {
        P(x, n - 1, mini, maxi, sum);
        if (x[n - 1] > maxi)
            maxi = x[n - 1];
        if (x[n - 1] < mini)
            mini = x[n - 1];
        sum += x[n - 1];
    }
}

int main()
{
    int n, x[101], mini, maxi, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    P(x, n, mini, maxi, sum);
    cout << mini << " " << maxi << " " << sum;
}