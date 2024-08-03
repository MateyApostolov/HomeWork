#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, ngr = 0;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) cin >> nc[i];
    sort(nc, nc + n);
    for(int i = 0; i < n - 1; i++) ngr = max(ngr, nc[i + 1] - nc[i]);
    cout << ngr;

    return 0;
}
