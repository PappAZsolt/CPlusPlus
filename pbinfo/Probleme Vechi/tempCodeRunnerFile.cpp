void F(int n, int a[], int &k)
{
    if (n > 0)
    {
        F(n - 1, a, k);
        if (a[n - 1] % 2 == 0)
        {
            k = k * 10 + a[n - 1];
        }
    }

    else if (n == 0 and a[0] % 2 != 0)
        k = -1;
}