#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m, nc, sum = 0, prc = pow(10, 9) + 7;
    cin >> n >> m;
    for(int i1 = 0; i1 < n; i1++) {
        for(int i2 = 0; i2 < m; i2++) {
            cin >> nc;
            nc = ((i1 + 1) * nc) % prc;
            nc = ((n - i1) * nc) % prc;
            nc = ((i2 + 1) * nc) % prc;
            nc = ((m - i2) * nc) % prc;
            sum += nc;
            sum %= prc;
        }
    }
    cout << sum;
    return 0;
}
