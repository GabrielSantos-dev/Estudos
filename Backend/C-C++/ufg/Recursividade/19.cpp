#include <iostream>
#include <cstdio>
using namespace std;

const int undef = 1 << 28;

int main() {

    int d[201][201];
    int i, j, k, n, m;

    cin >> n >> m;

    for (i = 0; i <= n; i++)
        d[i][1] = i;
    for (j = 0; j <= n; j++)
        d[0][j] = 0;

    for (j = 2; j <= m; j++) {
        for (i = 1; i <= n; i++) {
            d[i][j] = undef;
            for (k = 1; k <= i; k++)
                d[i][j] = min(d[i][j], 1 + max(d[k-1][j-1], d[i-k][j]));
        }
    }

    cout << d[n][m] << endl;

    return 0;
}
