#include <iostream>
#include <cstring>
using namespace std;
int Path(char a[],char d[101][101])
{
        char *p;
        int nr=0;
        char sep[3]="\\";
        p=strtok(a,sep);
        while(p)
        {
                strcpy(d[nr++],p);
                p=strtok(NULL,sep);
        }
        return nr;

}

int main()
{
    char a[101];
    char d[101][101];
    cin.get(a,101);
    cout<<Path(a,d);

    return 0;
}
