#include <bits/stdc++.h>
using namespace std;

int main () {
    int m, a, b, c, k, pari, dal, shir, nmp = INT_MAX, met;
    cin >> m >> a >> b >> c;
    cin >> k;
    string im, ki;
    for(int i = 0; i < k; i++) {
        cin >> im >> shir >> pari >> dal;
        if(dal >= m / 2 * a && shir == b + c && nmp > m / 2 * a * pari) {
            ki = im;
            nmp = m / 2 * a * pari;
            met = m / 2 * a;
        }
        if(dal >= m / 2 * (b + c) && shir == a && nmp > m / 2 * (b + c) * pari) {
            ki = im;
            nmp = m / 2 * (b + c) * pari;
            met = m / 2 * (b + c);
        }
    }
    if(nmp == INT_MAX) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    cout << ki << "\n";
    if(nmp % 100 == 0) cout << nmp / 100 << " lv\n";
    else if(nmp < 100) cout << nmp << " st\n";
    else cout << nmp / 100 << " lv " << nmp % 100 << " st\n";
    if(met % 100 == 0) cout << met / 100 << " m";
    else if(met < 100) cout << met << " sm";
    else cout << met / 100 << " m " << met % 100 << " sm";

    return 0;
}
