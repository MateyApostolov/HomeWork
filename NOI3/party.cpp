#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int k[n], s[n], sums = 0;
    double nmk = 1000000, h;
    for(int i = 0; i < n; i++) cin >> k[i];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        sums += s[i];
    }
    for(int i = 0; i < n; i++) nmk = min(nmk, 1.0 * k[i] * sums / s[i]);
    for(int i = 0; i < n; i++) {
        h = 1.0 * k[i] - nmk * s[i] / sums;
        printf ("%.2f", h);
    }


    return 0;
}

