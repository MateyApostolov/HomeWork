#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;
    char ns;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> ns;
        nc[i] = ns - '0';
    }
    for(int g = 1; g <= n / 2; g++) {
        int gsize = n / g;
        for(int b = 0; b + gsize - 1 < g * gsize; b += gsize) {
            int sr = (b + b + gsize - 1) / 2, csr = nc[sr];
            if(csr != 0) for(int i = b + csr - 1; i < b + gsize; i += csr) nc[i] = (nc[i] + csr) % 10;
        }
    }
    for(int i = 0; i < n; i++) {
        sum += nc[i];
        if(nc[i] == 1) sum++;
    }
    cout << sum;
    return 0;
}
