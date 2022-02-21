#include <iostream>
#include <cmath>
using namespace std;

int prim(long int x)
{
    long int i;
    if (x == 1 || x == 0)
        return 0;
    for (i = 2; i <= sqrt(x); ++i)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    long int a[102][102], n, m, i, j;
    cin >> n >> m;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= m; ++j)
            cin >> a[i][j];
    for (i = 1; i <= n; ++i)
    {
        if (prim(a[i][1]) == 0)
        {
            for (j = 1; j <= m; ++j)
                cout << a[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}