#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, r, k;
    cin >> n;
    int nk = floor(sqrt(n));
    if(nk * nk != n) nk++;
    int na = (nk - 1) * (nk - 1) + 1, kr = nk * nk, sr = (kr + na) / 2;
    ///cout << nk << " " << na << " " << kr << " " << sr;
    if(nk % 2 == 0) {
        if(n <= sr) {
            r = n - na + 1;
            k = nk;
        } else {
            r = nk;
            k = kr - n + 1;
        }
    } else {
        if(n <= sr) {
            k = n - na + 1;
            r = nk;
        } else {
            k = nk;
            r = kr - n + 1;
        }
    }
    cout << r << " " << k;
    return 0;
}
