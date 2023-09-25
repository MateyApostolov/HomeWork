#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s = n / 100, d = n / 10 % 10, e = n % 10;
    if (d == 0 && e == 0) {
        cout << 0;
        return 0;
    }
    int ngc, nmc;
    if (d != 0 && e != 0) {
        int v1 = s * 100 + d * 10 + e;
        int v2 = s * 100 + e * 10 + d;
        int v3 = d * 100 + s * 10 + e;
        int v4 = d * 100 + e * 10 + s;
        int v5 = e * 100 + s * 10 + d;
        int v6 = e * 100 + d * 10 + s;
        ngc = max(v1, max(v2, max(v3, max(v4, max(v5, v6)))));
        nmc = min(v1, min(v2, min(v3, min(v4, min(v5, v6)))));
    }
    if (d == 0 && e != 0) {
        int v1 = s * 100 + d * 10 + e;
        int v2 = s * 100 + e * 10 + d;
        int v3 = e * 100 + s * 10 + d;
        int v4 = e * 100 + d * 10 + s;
        ngc = max(v1, max(v2, max(v3, v4)));
        nmc = min(v1, min(v2, min(v3, v4)));
    }
    if (d != 0 && e == 0) {
        int v1 = s * 100 + d * 10 + e;
        int v2 = s * 100 + e * 10 + d;
        int v3 = d * 100 + s * 10 + e;
        int v4 = d * 100 + e * 10 + s;
        ngc = max(v1, max(v2, max(v3, v4)));
        nmc = min(v1, min(v2, min(v3, v4)));
    }
    cout << ngc - nmc;

    return 0;
}
