#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001;
int npr[maxn];

int main () {
    int n, m, nc;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> nc;
        npr[nc]++;
    }
    cout << fixed << setprecision(2);
    for(int i = 1; i <= n; i++) cout << 100.0 * npr[i] / m << "%\n";
    return 0;
}
