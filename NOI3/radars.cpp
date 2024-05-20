#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, maxs = 0;
    cin >> n;
    long long nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        nc[i] += 1000000;
    }
    sort(nc, nc + n);
    for(int i1 = 1; i1 < n - 1; i1++)
            maxs = max(maxs, (nc[i1] - nc[0]) * (nc[n - 1] - nc[i1]));
    cout << maxs;
    return 0;
}
