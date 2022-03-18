#include <iostream>

using namespace std;

int SC(char s[])
{
    if (s[0] == 0)
        return 0;
    if (s[0] >= '0' and s[0] <= '9')
        return s[0] - '0' + SC(s + 1);
    else
        return SC(s + 1);
}

int main()
{
    char s[101];
    cin.getline(s, 101);
    cout << SC(s);
}