#include <iostream>
#include <cstring>

using namespace std;

int nr_vocale(char s[])
{
    if (s[0] == 0)
        return 0;
    int l = strlen(s);
    int k = s[l - 1];
    s[l - 1] = 0;
    if (strchr("aeiouAEIOU", k))
        return 1 + nr_vocale(s);
    return nr_vocale(s);
}

int main()
{
    char s[101];
    cin.getline(s, 101);
    cout << nr_vocale(s);
}